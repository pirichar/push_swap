/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_sort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:33:38 by pirichar          #+#    #+#             */
/*   Updated: 2022/01/31 16:41:58 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	max_to_front(t_stacks *s)
{
	int	i;
	int	max;

	max = stack_max(&s->b);
	if (front(&s->b) == max)
	{
		pa(s);
		return ;
	}
	i = find_number(&s->b, max);
	if (i < s->b.count / 2)
		rrb(s);
	else
		rb(s);
}

static	void	split_b_higher(t_stacks *s, int mid)
{
	int	count;

	count = s->b.count;
	while (count-- > 0)
	{
		if (front_b_is_next(s))
		{
			pa(s);
			ra(s);
		}
		else if (s->b.count < 13)
			max_to_front(s);
		else if (mid <= front(&s->b))
			pa(s);
		else
			rb(s);
	}
}

static	void	push_a_top(t_stacks *s, int max)
{
	while (front(&s->a) <= max && front(&s->a) != 0)
	{
		if (front_a_is_next(s))
			ra(s);
		else
			pb(s);
	}
	if (should_sort_b(s))
		sort_b(s);
}

void	sort_b(t_stacks *s)
{
	int	b_max;

	if (s->b.count == 0)
		return ;
	b_max = stack_max(&s->b);
	split_b_higher(s, average(&s->b));
	while (front_a_is_next(s) && front(&s->a) != 0)
		ra(s);
	sort_b(s);
	push_a_top(s, b_max);
}

void	sort_big(t_stacks *s)
{
	int	mid;

	mid = average(&s->a);
	split_a_lower(s, mid);
	sort_b(s);
	push_a_top(s, stack_max(&s->a));
}
