/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 12:24:21 by pirichar          #+#    #+#             */
/*   Updated: 2022/02/02 18:55:17 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stacks(int argc, char **argv, t_stacks *arr)
{
	char	**tmp;
	int		count;

	if (argc == 2)
	{
		tmp = ft_split(argv[1], ' ');
		count = ft_wd_count_s(tmp);
		strarr_free(tmp);
		arr->a.numbers = malloc(sizeof(int) * count);
		arr->b.numbers = malloc(sizeof(int) * count);
		arr->c.numbers = malloc(sizeof(int) * count);
		init_small_array(argv, &arr->a);
	}
	else
	{
		arr->a.numbers = malloc(sizeof(int) * (argc - 1));
		arr->b.numbers = malloc(sizeof(int) * (argc - 1));
		arr->c.numbers = malloc(sizeof(int) * (argc - 1));
		init_big_array(argc, argv, &arr->a);
	}
	copy_stack(&arr->a, &arr->c);
	rev_bubblesort_stack(&arr->c);
	c_value_a_c(arr);
}

void	c_value_a_c(t_stacks *s)
{
	int	i;
	int	j;
	int	k;
	int	c;

	i = s->a.count;
	j = 0;
	while (i > 0)
	{
		c = s->c.count;
		k = 0;
		while (c > 0)
		{
			if (s->a.numbers[j] == s->c.numbers[k])
			{
				s->a.numbers[j] = (s->c.count - k - 1);
				break ;
			}
			k++;
			c--;
		}
		i--;
		j++;
	}
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
	free (tmp);
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

int	ft_wd_count_s(char **to_count)
{
	int	i;

	i = 0;
	while (to_count[i])
		i++;
	return (i);
}
