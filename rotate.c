/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:43:56 by pirichar          #+#    #+#             */
/*   Updated: 2022/01/18 15:52:49 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*ra : rotate a - décale d’une position vers 
le haut tous les élements de la pile a.
Le premier élément devient le dernier.
rb : rotate b - décale d’une position vers 
le haut tous les élements de la pile b. 
Le premier élément devient le dernier.
rr : ra et rb en même temps.*/

static void	rotate(t_stack *src)
{
	int	tmp;
	int	i;

	i = src->count - 1;
	tmp = src->numbers[i];
	while (i > 0)
	{
		src->numbers[i] = src->numbers[i - 1];
		i--;
	}
	src->numbers[0] = tmp;
}

void	ra(t_stacks *src)
{
	if (src->a.count >= 2)
	{
		rotate(&src->a);
		ft_putendl_fd("ra", 1);
	}
}

void	rb(t_stacks *src)
{
	if (src->b.count >= 2)
	{
		rotate(&src->b);
		ft_putendl_fd("rb", 1);
	}
}

void	rr(t_stacks *src)
{
	if (src->a.count >= 2)
		rotate(&src->a);
	if (src->b.count >= 2)
		rotate(&src->b);
	ft_putendl_fd("rr", 1);
}
