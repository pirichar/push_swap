/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:08:56 by pirichar          #+#    #+#             */
/*   Updated: 2022/01/31 13:09:46 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max_b(t_stacks *stacks)
{
	int	i;
	int	max;

	i = 0;
	max = stacks->b.numbers[0];
	while (i < stacks->b.count)
	{
		if (max < stacks->b.numbers[i])
			max = stacks->b.numbers[i];
		i++;
	}
	return (max);
}

int	find_middle(t_stack *s)
{
	int		rtn;
	t_stack	tmp;

	ft_bzero(&tmp, sizeof(t_stack));
	tmp.numbers = malloc(sizeof(int) * s->count);
	copy_stack(s, &tmp);
	bubblesort_stack(&tmp);
	rtn = tmp.numbers[tmp.count / 2];
	free (tmp.numbers);
	return (rtn);
}
