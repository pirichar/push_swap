/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 12:24:21 by pirichar          #+#    #+#             */
/*   Updated: 2022/01/14 16:53:56 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stacks(int argc, char **argv, t_stacks *arr)
{
	arr->a.numbers = malloc(sizeof(int) * (argc - 1));
	arr->b.numbers = malloc(sizeof(int) * (argc - 1));
	arr->c.numbers = malloc(sizeof(int) * (argc - 1));
	if (argc > 3)
		init_big_array(argc, argv, &arr->a);
	if (argc == 2)
		init_small_array(argv, &arr->a);
	copy_stack(&arr->a, &arr->c);
	printf("Before Sort\nA               B                   C\n");
	print_all_stack(arr);
	printf("After Bubble Sort\nA               B                   C\n");
	bubblesort_stack(&arr->c);
	print_all_stack(arr);
}

void	init_small_array(char **argv, t_stack *arr)
{
	int		i;
	char	**tmp;
	int		count;

	tmp = ft_split(argv[1], ' ');
	count = ft_wd_count_s(tmp);
	i = 0;
	while (tmp[i])
	{
		arr->numbers[count - 1] = ft_atol(tmp[i]);
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
	while (argv[j])
	{
		arr->numbers[i] = ft_atol(argv[j]);
		arr->count++;
		i--;
		j++;
	}
}

int	ft_wd_count_s(char **argv)
{
	int	i;
	
	i = 0;
	while (argv[i + 1])
		i++;
	return (i);
}
