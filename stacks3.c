/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:37:19 by pirichar          #+#    #+#             */
/*   Updated: 2022/01/31 16:38:22 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	front(t_stack *s)
{
	return (s->numbers[s->count - 1]);
}

int	back(t_stack *s)
{
	return (s->numbers[0]);
}

int	find_number(t_stack *s, int n)
{
	int	i;

	i = 0;
	while (i < s->count)
	{
		if (s->numbers[i] == n)
			return (i);
		i++;
	}
	return (-1);
}

int	average(t_stack *s)
{
	int	i;
	int	sum;

	i = 0;
	sum = 0;
	while (i < s->count)
	{
		sum += s->numbers[i];
		i++;
	}
	return ((float)(sum) / (int)(s->count + 0.5f));
}

void	split_a_lower(t_stacks *s, int mid)
{
	while (contains_smaller(&s->a, mid))
	{
		while (front(&s->a) > mid)
			ra(s);
		pb(s);
	}
}
