/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_arrays.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 12:24:21 by pirichar          #+#    #+#             */
/*   Updated: 2022/01/12 18:33:29 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_arrays(int argc, char **argv, t_stacks *arr)
{
	arr->a.numbers = malloc(sizeof(char) * (argc - 1));
	arr->b.numbers = malloc(sizeof(char) * (argc - 1));
	arr->c.numbers = malloc(sizeof(char) * (argc - 1));
	if (argc > 3)
		init_big_array(argc, argv, &arr->a);
	if (argc == 2)
		init_small_array(argv, &arr->a);
	//copy array A into array C

	//
	printf("This is arr->a.count = %d\n", arr->a.count);
}

void	init_small_array(char **argv, t_stack *arr)
{
	int		i;
	char	**tmp;
	int		count;

	tmp = ft_split(argv[1], ' ');
	count = ft_wd_count(tmp);
	i = 0;
	while (tmp[i])
	{
		arr->numbers[count - 1] = ft_atol(tmp[i]);
		printf("This is arr->number[%d] = %d\n", count - 1, arr->numbers[count - 1]);
		arr->count++;
		i++;
		count--;
	}	
}

void	init_big_array(int argc, char **argv, t_stack *arr)
{
	int	i;
	int	j;

	i = argc - 2;
	j = 1;
	while (i >= 0)
	{
		arr->numbers[i] = ft_atol(argv[j]);
		printf("This is arr->number[%d] = %d\n", i, arr->numbers[i]);
		arr->count++;
		i--;
		j++;
	}
}

int	ft_wd_count(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

