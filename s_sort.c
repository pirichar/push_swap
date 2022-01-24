/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_sort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 16:43:04 by pirichar          #+#    #+#             */
/*   Updated: 2022/01/24 08:52:50 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//verify if allready in order

//sort :
//pushing the smallest 
/* 
Si j'ai 3 patente dans mon truc le plus petit sera toujours 
0  ou 1 en fonction de ou je commence a compter
Donc si je cherche toujours pour 1 et que je le push sur B 
je n'ai qu'à vérifier si c'est mes 2 restants sont en ordre sur le A
puis push mon truc du b vers le a;
S'il ne sont pas en order je les rotate et ça fini là;*/

static void	sort_2(t_stacks *stacks)
{
	if (stacks->a.numbers[0] < stacks->a.numbers[1])
	{
		sa(stacks);
	}
}

static void	sort_3(t_stacks *stacks)
{
	int max;

	max = find_max_a(stacks);
	if (max == stacks->a.numbers[1])
		rra(stacks);
	else if (max == stacks->a.numbers[2])
		ra(stacks);
	if (!is_in_order(&stacks->a))
		sa(stacks);
}

int	find_max_a(t_stacks *stacks)
{
	int i;
	int max;

	i = 0;
	max = stacks->a.numbers[0];
	while(i < stacks->a.count)
	{
		if (max < stacks->a.numbers[i])
			max = stacks->a.numbers[i];
		i++;
	}
	return (max);
}

static void	sort_4_5(t_stacks *stacks)
{
	int i;

	if (stacks->a.count == 5)
		i = (stacks->c.count / 2) + 1;
	else
		i = stacks->c.count / 2;
	while(stacks->a.count > 3)
	{
		// printf("This is stacks->a.numbers[stacks->a.count-1] = %d\n", stacks->a.numbers[stacks->a.count -1]);
		// printf("This is stacks->c.count = %d\n", stacks->c.count);
		// printf("this is i %d\n", i);
		if(stacks->a.numbers[stacks->a.count -1] < i - 1)
			pb(stacks);
		else
			ra(stacks); 
	}
	sort_3(stacks);
	while (stacks->b.count > 0)
		pa(stacks);
	if (stacks->a.numbers[stacks->a.count -1] != 0)
		sa(stacks);
}

void	small_sort(t_stacks *stacks)
{
	if (is_in_order(&stacks->a) == true)
	{
		printf("\033[0;32mAllready in order\n\033[0;0m");
		return ;
	}
	else if (stacks->a.count == 2)
		sort_2(stacks);
	else if (stacks->a.count == 3)
		sort_3(stacks);
	else 
		sort_4_5(stacks);
	print_all_stack(stacks);	
}
