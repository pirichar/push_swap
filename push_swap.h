/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 12:24:35 by pirichar          #+#    #+#             */
/*   Updated: 2022/01/12 22:14:30 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H*/

# include<stdio.h>
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
long	ft_atol(const char *str);
int		check_is_int(char *str);
int		s_argv1(char **argv);
int		ft_wd_count(char **str);
void	init_arrays(int argc, char **argv, t_stacks*arr);
void	init_big_array(int argc, char **argv, t_stack *arr);
void	init_small_array(char **argv, t_stack *arr);