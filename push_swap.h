/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 12:24:35 by pirichar          #+#    #+#             */
/*   Updated: 2022/01/17 13:36:41 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H*/

# include <stdio.h>
# include <stddef.h>
# include <stdlib.h>
# include <libft/libft.h> 

typedef struct s_stack
{
	int			*numbers;
	int			count;
}				t_stack;

typedef struct s_stacks
{
	t_stack	a;
	t_stack	b;
	t_stack	c;
}				t_stacks;

int		parse(int argc, char **argv);
int		check_is_int(char *str);
int		s_argv1(char **argv);
int		ft_wd_count(int argc, char **argv);
int		ft_wd_count_s(char **argv);

long	ft_atol(const char *str);

void	init_stacks(int argc, char **argv, t_stacks*arr);
void	init_big_array(int argc, char **argv, t_stack *arr);
void	init_small_array(char **argv, t_stack *arr);

void	bubblesort_stack(t_stack *to_sort);
void	print_a_stack(t_stack *to_print);
void	print_all_stack(t_stacks *to_print);
void	copy_stack(t_stack *src, t_stack *dst);
