/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 16:44:38 by pirichar          #+#    #+#             */
/*   Updated: 2022/01/22 16:45:42 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_bubblesort_stack(t_stack *to_sort)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < to_sort->count - 1)
	{
		if (to_sort->numbers[i] < to_sort->numbers[i + 1])
		{
			tmp = to_sort->numbers[i + 1];
			to_sort->numbers[i + 1] = to_sort->numbers[i];
			to_sort->numbers[i] = tmp;
			i = 0;
		}
		else
			i++;
	}
}

void	bubblesort_stack(t_stack *to_sort)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < to_sort->count - 1)
	{
		if (to_sort->numbers[i] > to_sort->numbers[i + 1])
		{
			tmp = to_sort->numbers[i + 1];
			to_sort->numbers[i + 1] = to_sort->numbers[i];
			to_sort->numbers[i] = tmp;
			i = 0;
		}
		else
			i++;
	}
}

bool	is_in_order(t_stack *to_check)
{
	int	i;

	i = 0;
	while (i < to_check->count)
	{
		if (to_check->numbers[i + 1] > to_check->numbers[i])
			return (false);
		i++;
	}
	return (true);
}
