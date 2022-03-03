/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_sort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 16:43:04 by pirichar          #+#    #+#             */
/*   Updated: 2022/03/01 15:07:41 by pirichar         ###   ########.fr       */
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
	max = back(&stacks->a);
	while (i < stacks->a.count)
	{
		if (max < stacks->a.numbers[i])
			max = stacks->a.numbers[i];
		i++;
	}
	return (max);
}

/* 
Pour sort 4_5 c'est assez simple;
On cherche les 2 plus petit ;
On les envoie à droite;
Puis finalement on fait un sort3;
On repousse sur a et on fait un sa au besoin
*/

static void	sort_4_5(t_stacks *stacks)
{
	int	i;

	if (stacks->a.count == 5)
		i = (stacks->c.count / 2) + 1;
	else
		i = stacks->c.count / 2;
	while (stacks->a.count > 3)
	{
		if (front(&stacks->a) < i - 1)
			pb(stacks);
		else
			ra(stacks);
	}
	sort_3_a(stacks);
	while (stacks->b.count > 0)
		pa(stacks);
	if (front(&stacks->a) != 0)
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
