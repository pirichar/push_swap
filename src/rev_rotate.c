/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:27:16 by pirichar          #+#    #+#             */
/*   Updated: 2022/02/02 18:56:10 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*rra : reverse rotate a - décale d’une position vers 
le bas tous les élements de la pile a. 
Le dernier élément devient le premier.
rrb : reverse rotate b - décale d’une position vers 
le bas tous les élements de la pile b. 
Le dernier élément devient le premier. 
rrr : rra et rrb en même temps.*/

static void	rev_rotate(t_stack *src)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = src->numbers[i];
	while (i < src->count - 1)
	{
		src->numbers[i] = src->numbers[i + 1];
		i++;
	}
	src->numbers[src->count - 1] = tmp;
}

void	rra(t_stacks *src)
{
	if (src->a.count >= 2)
	{
		rev_rotate(&src->a);
		ft_putendl_fd("rra", 1);
	}
}

void	rrb(t_stacks *src)
{
	if (src->b.count >= 2)
	{
		rev_rotate(&src->b);
		ft_putendl_fd("rrb", 1);
	}
}

void	rrr(t_stacks *src)
{
	if (src->a.count >= 2)
		rev_rotate(&src->a);
	if (src->b.count >= 2)
		rev_rotate(&src->b);
	ft_putendl_fd("rrr", 1);
}
