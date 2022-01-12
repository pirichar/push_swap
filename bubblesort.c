/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubblesort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 12:24:30 by pirichar          #+#    #+#             */
/*   Updated: 2022/01/12 12:31:53 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

int main(int argc, char **argv)
{
	printf("---You have a total of %i argument---\n", argc);
	if (argc == 1 || parse(argc, argv) == 0)
		return (0);	
	
	/*int i;
	i = 1;
	while(i < argc)
	{
		printf("----THE BEFORE PRINT------");
		printf("This is argv[%i] = %s\n", i, argv[i]);
		i++;
	}*/

	init_arrays(argc, argv);
	/*
	char *tmp;
	i = 1;
	while(i < argc - 1)
	{
		if (ft_atol(argv[i]) > ft_atol(argv[i + 1]))
			{
				tmp = argv[i + 1];
				argv[i + 1] = argv[i];
				argv[i] = tmp;
				i = 1;
			}
		else 
			i++;
	}
	i = 1 ;
	while(i < argc)
	{
		printf("----THE AFTER PRINT----");
		printf("This is argv[%i] = %s\n", i, argv[i]);
		i++;
	}*/
}