/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:38:27 by pirichar          #+#    #+#             */
/*   Updated: 2022/02/02 18:43:43 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"

bool	contains_smaller(t_stack *s, int max)
{
	int	i;

	i = 0;
	while (i < s->count)
	{
		if (s->numbers[i] <= max)
			return (true);
		i++;
	}
	return (false);
}

bool	front_b_is_next(t_stacks *s)
{
	return (front(&s->b) == 0 || front(&s->b) == back(&s->a) + 1);
}

bool	front_a_is_next(t_stacks *s)
{
	return (front(&s->a) == 0 || front(&s->a) == back(&s->a) + 1);
}

bool	should_sort_b(t_stacks *s)
{
	return (stack_min(&s->b) == back(&s->a) + 1);
}
