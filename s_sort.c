/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_sort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 16:43:04 by pirichar          #+#    #+#             */
/*   Updated: 2022/01/31 13:08:02 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_2(t_stacks *stacks)
{
	if (stacks->a.numbers[0] < stacks->a.numbers[1])
	{
		sa(stacks);
	}
}

static void	sort_3_a(t_stacks *stacks)
{
	int	max;

	max = find_max_a(stacks);
	if (max == stacks->a.numbers[1])
		rra(stacks);
	else if (max == stacks->a.numbers[2])
		ra(stacks);
	if (!is_in_order(&stacks->a))
		sa(stacks);
}

int	find_max_a(t_stacks *stacks)
{
	int	i;
	int	max;

	i = 0;
	max = stacks->a.numbers[0];
	while (i < stacks->a.count)
	{
		if (max < stacks->a.numbers[i])
			max = stacks->a.numbers[i];
		i++;
	}
	return (max);
}

static void	sort_4_5(t_stacks *stacks)
{
	int	i;

	if (stacks->a.count == 5)
		i = (stacks->c.count / 2) + 1;
	else
		i = stacks->c.count / 2;
	while (stacks->a.count > 3)
	{
		if (stacks->a.numbers[stacks->a.count -1] < i - 1)
			pb(stacks);
		else
			ra(stacks);
	}
	sort_3_a(stacks);
	while (stacks->b.count > 0)
		pa(stacks);
	if (stacks->a.numbers[stacks->a.count -1] != 0)
		sa(stacks);
}

void	small_sort(t_stacks *stacks)
{
	if (stacks->a.count == 2)
		sort_2(stacks);
	else if (stacks->a.count == 3)
		sort_3_a(stacks);
	else
		sort_4_5(stacks);
}
