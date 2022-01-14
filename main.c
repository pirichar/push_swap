/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 12:24:30 by pirichar          #+#    #+#             */
/*   Updated: 2022/01/14 14:57:43 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stacks	arr;

	ft_bzero(&arr, sizeof(t_stacks));
	printf("\033[0;36m---You have a total of %i argument given to your main---\033[0m\n", argc);
	if (argc == 1 || parse(argc, argv) == 0)
		return (0);
	printf("I have a total of %d ints to play with\n", ft_wd_count(argc, argv));
	init_stacks(argc, argv, &arr);
	/*if (ft_wd_count(argc, argv) > 5)
		b_sort(argc, argv)
	else
		s_sort(argc,argv)
		*/
}