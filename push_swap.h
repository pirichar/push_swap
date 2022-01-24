/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 12:24:35 by pirichar          #+#    #+#             */
/*   Updated: 2022/01/23 10:31:11 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H*/

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <libft/libft.h> 
#include <stdbool.h>
#include "colors.h"

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
int		ft_wd_count_s(char **to_count);

long	ft_atol(const char *str);

void	init_stacks(int argc, char **argv, t_stacks*arr);
void	init_big_array(int argc, char **argv, t_stack *arr);
void	init_small_array(char **argv, t_stack *arr);
void	c_value_a_c(t_stacks *s);

void	bubblesort_stack(t_stack *to_sort);
void	rev_bubblesort_stack(t_stack *to_sort);
void	print_a_stack(t_stack *to_print);
void	print_all_stack(t_stacks *to_print);
void	copy_stack(t_stack *src, t_stack *dst);

void	pb(t_stacks *src);
void	pa(t_stacks *src);

void	sa(t_stacks *src);
void	sb(t_stacks *src);
void	ss(t_stacks *src);

void	ra(t_stacks *src);
void	rb(t_stacks *src);
void	rr(t_stacks *src);

void	rra(t_stacks *src);
void	rrb(t_stacks *src);
void	rrr(t_stacks *src);

void	small_sort(t_stacks *stacks);
bool 	is_in_order(t_stack *to_check);
int	find_0(t_stacks *stacks);

