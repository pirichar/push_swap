/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_sort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:43:28 by pirichar          #+#    #+#             */
/*   Updated: 2022/01/27 15:23:14 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//https://www.youtube.com/watch?v=7KW59UO55TQ

static void	sort_a(t_stacks *s, int *pushed)
{
	int	mid;
	int	i;
	int	c;

	mid = find_middle(&s->a);
	if (s->a.count % 2 == 0)
		c = s->a.count / 2;
	else
		c = (s->a.count / 2) + 1;
	while (s->a.count > c)
	{
		if (s->a.count == 2)
			return ;
		i = s->a.count - 1;
		if (s->a.numbers[i] < mid)
		{
			pb(s);
			(*pushed)++;
		}
		else if (s->a.numbers[0] < mid)
			rra(s);
		else
			ra (s);
	}
}

static int	find_middle_b(t_stacks *s, int pushed)
{
	int	arr[pushed];
	int	i;
	int	j;
	int	tmp;

	j = pushed;
	i = 0;
	while(i < pushed)
	{
		arr[i] = s->b.numbers[s->b.count - j];
		j--;
		i++;
	}
	i = 0;
	while(i < pushed - 1)
	{
		if (arr[i] > arr[i + 1])
		{
			tmp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
	
	return ((arr[pushed / 2]));
}

static void	sort_3_b(t_stacks *s)
{
	int	max;

	max = find_max_b(s);
	if (max == s->b.numbers[s->b.count - 1])
		pa(s);
	else if (max == s->b.numbers[s->b.count - 2])
	{
		sb(s);
		pa(s);
	}
	else if (max == s->b.numbers[s->b.count -3])
	{
		rrb(s);
		pa(s);
	}
}

void	big_sort(t_stacks *s)
{

	int	pushed;
	int r_back;
	int	i;
//	int j;
	int mid;

	pushed = 0;
	r_back = 0;
	while (s->a.count > 2 && pushed == 0) 
	{
		sort_a(s, &pushed);
		big_sort(s);
	}
	if(s->a.numbers[0] < s->a.numbers[1])
		sa(s);

	i = pushed;
//	j = i / 2 + 1;
	mid = find_middle_b(s, i);
//	while(s->b.count > j)
	while(pushed > 0)
	{
		if (pushed == 1)
		{
			pa(s);
			pushed--;
			return;
		}
		if (pushed == 2)
		{
			if(s->b.numbers[s->b.count -1] < s->b.numbers[s->b.count - 2])
				sb(s);
			pa(s);
			pa(s);
			pushed = 0;
			return;
		}
		if(pushed == 3)
		{
			sort_3_b(s);
			pushed = 2;
		}
		// Here I should check if my number is higher then the mid point of my remaining stuff
		// I could consider that my stack is always from count -1 to count - pushed
		// I should then try to crate a tmp array; sort the values in there and sort them out
		// Then I could find my mid point and try to compare 
		// Then I could just check if my top is > then my 
		//if(s->b.numbers[s->b.count - 1] == (s->a.numbers[s->a.count - 1]) - 1)
		else if(s->b.numbers[s->b.count - 1] > mid ||
		 s->b.numbers[s->b.count - 1] == (s->a.numbers[s->a.count -1 ]) - 1)
		{
			pa(s);
			pushed--;
		}
		else 
		{
			rb(s);
			r_back++;
		}
	}
	while(r_back != 0)
	{
		rrb(s);
		r_back--;
	}
}