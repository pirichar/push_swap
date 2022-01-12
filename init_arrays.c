/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_arrays.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 12:24:21 by pirichar          #+#    #+#             */
/*   Updated: 2022/01/12 15:48:44 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_arrays(int argc, char **argv, t_stacks *arr)
{

	int i;
	int j;

	arr->a.numbers = malloc(sizeof(char) * (argc - 1));
	arr->b.numbers = malloc(sizeof(char) * (argc - 1));	
	if (argc > 3)
	{
		//init array A
		i = argc - 2;
		j = 1;
		while(i >= 0)
		{
			arr->a.numbers[i] = ft_atol(argv[j]);
			printf("This is arr->a.number[%d] = %d\n", i, arr->a.numbers[i]);
			arr->a.count++;
			i--;
			j++;
		}
		//check if small or big sort and apply sort
	}
	if (argc == 2)
	{
		char **tmp;
		int count;

		tmp = ft_split(argv[1],' ');
		count = ft_wd_count(tmp);
		i = 0;
		while (tmp[i])
		{
			arr->a.numbers[count - 1] = ft_atol(tmp[i]);
			printf("This is arr->a.number[%d] = %d\n", count-1, arr->a.numbers[count-1]);
			arr->a.count++;
			i++;
			count--;
		}	
	}
	printf("This is arr->a.count = %d\n", arr->a.count);
}

//init small array 

//init array

int	ft_wd_count(char **str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}