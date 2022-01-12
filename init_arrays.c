/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_arrays.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 12:24:21 by pirichar          #+#    #+#             */
/*   Updated: 2022/01/12 14:17:23 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_arrays(int argc, char **argv)
{
	t_stack	*array_a;
	t_stack	*array_b;
	int i;
	int j;

	array_a = ft_calloc(1, sizeof(t_stack));
	array_b = ft_calloc(1, sizeof(t_stack));
	array_a->numbers = malloc(sizeof(char) * (argc - 1));
	array_b->numbers = malloc(sizeof(char) * (argc - 1));
	if (argc > 3)
	{
		i = argc - 2;
		j = 1;
		while(i >= 0)
		{
			array_a->numbers[i] = ft_atol(argv[j]);
			printf("This is array_a->number[%d] = %d\n", i, array_a->numbers[i]);
			array_a->count++;
			i--;
			j++;
		}
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
			array_a->numbers[count - 1] = ft_atol(tmp[i]);
			printf("This is array_a->number[%d] = %d\n", count-1, array_a->numbers[count-1]);
			array_a->count++;
			i++;
			count--;
		}	
	}
	printf("This is array_a->count = %d\n", array_a->count);
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