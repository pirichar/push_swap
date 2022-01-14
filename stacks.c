/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 11:13:21 by pirichar          #+#    #+#             */
/*   Updated: 2022/01/14 13:15:13 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	copy_stack(t_stack *src, t_stack *dst)
{
	int	i;

	i = 0;
	while (i < src->count)
	{
		dst->numbers[i] = src->numbers[i];
		dst->count++;
		i++;
	}
}

void	bubblesort_stack(t_stack *to_sort)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < to_sort->count - 1)
	{
		if (to_sort->numbers[i] > to_sort->numbers[i + 1])
		{
			tmp = to_sort->numbers[i + 1];
			to_sort->numbers[i + 1] = to_sort->numbers[i];
			to_sort->numbers[i] = tmp;
			i = 0;
		}
		else
			i++;
	}
}

void	print_a_stack(t_stack *to_print)
{
	int	i;

	i = 0;
	while (i < to_print->count)
	{
		ft_putnbr_fd(to_print->numbers[i], 1);
		ft_putchar_fd('\n', 1);
		i++;
	}
	ft_putchar_fd('\n', 1);
}

void	print_all_stack(t_stacks *to_print)
{
	int	i;

	i = 0;
	while (i < to_print->a.count)
	{
		printf("\033[1;32m%-10d\033[1;0m ",to_print->a.numbers[i]);
		printf("     \033[1;31m%-10d \033[1;32m    ",to_print->b.numbers[i]);
		printf("     \033[1;33m%-10d\n\033[1;0m",to_print->c.numbers[i]);
		i++;
	}
}

int	ft_wd_count(int argc, char **argv)
{
	int	i;
	char **tmp;

	if (argc == 2 )//&& argv[1] != (void*)NULL )//&& s_argv1(argv) > 1)
	{
		tmp = ft_split(argv[1], ' ');
		i = 0;
		while(tmp[i])
		i++;
		return (i);
	}
	i = 0;
	while (argv[i + 1])
		i++;
	return (i);
}
