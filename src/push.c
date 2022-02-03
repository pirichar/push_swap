/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 23:08:07 by pirichar          #+#    #+#             */
/*   Updated: 2022/02/02 18:56:05 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* pa : push a - prend le premier élément au sommet de b et le met sur a.
 Ne fait rien si b est vide.
pb : push b - prend le premier élément au sommet de a et le met sur b. Ne fait
rien si a est vide. */

static int	pop(t_stack *to_pop)
{
	int	n;

	n = to_pop->numbers[to_pop->count - 1];
	to_pop->count--;
	return (n);
}

static void	push(t_stack *s, int n)
{
	s->numbers[s->count++] = n;
}

void	pa(t_stacks *src)
{
	if (src->b.count > 0)
	{
		push(&src->a, pop(&src->b));
		ft_putendl_fd("pa", 1);
	}
}

void	pb(t_stacks *src)
{
	if (src->a.count > 0)
	{
		push(&src->b, pop(&src->a));
		ft_putendl_fd("pb", 1);
	}
}
