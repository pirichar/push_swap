/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 11:13:21 by pirichar          #+#    #+#             */
/*   Updated: 2022/02/03 10:21:31 by pirichar         ###   ########.fr       */
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

void	print_all_stack(t_stacks *s)
{
	int	i;
	int	j;

	i = 0;
	j = s->c.count - 1;
	while (j >= 0)
	{
		if (s->a.count > j)
			printf("\033[1;32mA[%d] %-10d\033[1;0m ", i, s->a.numbers[j]);
		else
			printf("%16c", ' ');
		if (s->b.count > j)
			printf("\033[1;31mB[%d]%-10d \033[1;0m    ", i, s->b.numbers[j]);
		else
			printf("%19c", ' ');
		printf("\033[1;33mC[%d]%-10d\n\033[1;0m", i, s->c.numbers[j]);
		j--;
		i++;
	}
}

int	ft_wd_count(int argc, char **argv)
{
	int		i;
	char	**tmp;

	if (argc == 2)
	{
		tmp = ft_split(argv[1], ' ');
		i = 0;
		while (tmp[i])
			i++;
		strarr_free (tmp);
		return (i);
	}
	i = 0;
	while (argv[i + 1])
		i++;
	return (i);
}
