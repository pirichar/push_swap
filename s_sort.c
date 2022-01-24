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
		print_all_stack(stacks);
	}
}

static void	sort_3(t_stacks *stacks)
{
	if (stacks->a.numbers[stacks->a.count - 1] == 0)
	{
		pb(stacks);
		if (stacks->a.numbers[1] > stacks->a.numbers[2])
			sa(stacks);
		pa(stacks);
		print_all_stack(stacks);
	}
	if (stacks->a.numbers[stacks->a.count -1] == 1)
	{
		sa(stacks);
		if (stacks->a.numbers[stacks->a.count - 1] == 2)
			ra(stacks);
		print_all_stack(stacks);
	}
	if (stacks->a.numbers[stacks->a.count -1] == 2)
	{
		ra(stacks);
		if (stacks->a.numbers[stacks->a.count - 1] == 1)
			sa(stacks);
		print_all_stack(stacks);
	}
}

int	find_0(t_stacks *stacks)
{
	int i;

	i = 0;
	while(i < stacks->a.count)
	{
		if (stacks->a.numbers[i] == 0)
			return (i);
		i++;
	}
	return (-1);
}

/*static void	sort_4(t_stacks *stacks)
{
	


}*/

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
	/*else if (stacks->a.count == 4)
		sort_4(stacks);*/
}
