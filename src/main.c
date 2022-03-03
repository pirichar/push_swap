/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 12:24:30 by pirichar          #+#    #+#             */
/*   Updated: 2022/03/03 09:20:59 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stacks	arr;

	ft_bzero(&arr, sizeof(t_stacks));
	if (argc < 2)
		return (0);
	if (parse(argc, argv) == 0)
	{
		write (2, "Error\n", 7);
		return (0);
	}
	init_stacks(argc, argv, &arr);
	if (is_in_order(&arr.a))
		return (0);
	if (arr.a.count < 6)
		small_sort(&arr);
	else
		sort_big(&arr);
	free(arr.a.numbers);
	free(arr.b.numbers);
	free(arr.c.numbers);
}
