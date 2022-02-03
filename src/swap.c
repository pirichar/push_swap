/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:19:36 by pirichar          #+#    #+#             */
/*   Updated: 2022/02/02 18:56:40 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*sa : swap a - intervertit les 2 premiers éléments au sommet de la pile a. 
Ne fait rien s’il n’y en a qu’un ou aucun.

sb : swap b - intervertit les 2 premiers éléments au sommet de la pile b. 
Ne fait rien s’il n’y en a qu’un ou aucun.

ss : sa et sb en même temps.
*/

static void	swap(t_stack *src)
{
	int	tmp;

	tmp = src->numbers[src->count - 1];
	src->numbers[src->count - 1] = src->numbers[src->count - 2];
	src->numbers[src->count - 2] = tmp;
}

void	sa(t_stacks *src)
{
	if (src->a.count > 1)
		swap(&src->a);
	ft_putendl_fd("sa", 1);
}

void	sb(t_stacks *src)
{
	if (src->b.count > 1)
	{
		swap(&src->b);
		ft_putendl_fd("sb", 1);
	}
}

void	ss(t_stacks *src)
{
	if (src->a.count > 1)
		swap(&src->a);
	if (src->b.count > 1)
		swap(&src->b);
	ft_putendl_fd("sb", 1);
}
