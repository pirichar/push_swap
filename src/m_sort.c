/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_sort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:33:38 by pirichar          #+#    #+#             */
/*   Updated: 2022/02/23 12:02:17 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	max_to_front(t_stacks *s)
{
	int	i;
	int	max;

	max = stack_max(&s->b);
	if (front(&s->b) == max)
	{
		pa(s);
		return ;
	}
	i = find_number(&s->b, max);
	if (i < s->b.count / 2)
		rrb(s);
	else
		rb(s);
}

/* 
Split b higher est très important pour l'algo
Elle sera appelé en récursion à travers sort b

L'option 1 est que le chiffre est le next ( 0 ou back + 1)
Dans ce cas je pousse vers A et je rotate pour sort ce chiffre

Tant que j'ai plus de 13 chiffres : 
Si mon front de b est plus grand que mon mid je le pousse à A 

Dès que je suis rendu à 13 chiffres :
Je prends la fonction max to front qui :
Ne pousse que le max de mon stack B (ce qui sort mon stack)
Cherche ou se trouve le max et je rb ou rrb en fonction
Si en cherchant le max je trouve le prochain chiffre à sort
je le pa et ra par la suite
*/

static	void	split_b_higher(t_stacks *s, int mid)
{
	int	count;

	count = s->b.count;
	while (count-- > 0)
	{
		if (front_b_is_next(s))
		{
			pa(s);
			ra(s);
		}
		else if (s->b.count < 13)
			max_to_front(s);
		else if (front(&s->b) >= mid)
			pa(s);
		else
			rb(s);
	}
}

/*
push_a_top est l'autre fonction qui peut apellé récursivement b
Elle s'occupe de vider les blocs récursif
Soit elle envoie le top du bloc en bas avec ra ou elle le pousse à b
Une fois le bloc vidé elle vérifie avec should sort b
Should sort b vérifie si le stack min de b est le nombre 
après le bas du stack a ( prochain à etre sort)


*/

static	void	push_a_top(t_stacks *s, int max)
{
	while (front(&s->a) <= max && front(&s->a) != 0)
	{
		if (front_a_is_next(s))
			ra(s);
		else
			pb(s);
	}
	if (should_sort_b(s))
		sort_b(s);
}

/*
Sort B est ma fonction récursive qui est appellée par elle même
mais aussi par push_a_top

Sort B apelle split_b_higher et envoie à A du plus grand au plus petit
tous le stack B jusqu'à ce que celui-ci ait fait b.count nombre d'opérations.
Par la suite; l'algo vérifie si on peut déjà sort A avant de 
s'apeller récursivement jusqu'à se vider

Elle définie à chauqe itération le b_max 
qui sert à push_a_top de backtracking 
pour savoir dans quel bloc de B elle elle se situe

La récursion se brise quand le count de b est nul
Dès que la récursion est brisé Sort_b appel push_a_top avec son B_MAX
*/

void	sort_b(t_stacks *s)
{
	int	b_max;

	if (s->b.count == 0)
		return ;
	b_max = stack_max(&s->b);
	split_b_higher(s, average(&s->b));
	while (front_a_is_next(s) && front(&s->a) != 0)
		ra(s);
	sort_b(s);
	push_a_top(s, b_max);
}

/*
Cet algo est un espèce de midpoint algoritm

1- Envoyer tout ce qui est + petit que le milieu de A dans B

2- Sort B en fonction du nombre jusqu'à vider le stack B récursivement
	a- Si B à 13 et moins; envoyé à A que le + gros
	 de B ou le prochain nombre à trier
	b- Si B est + grand que 13; si le chiffre est 
	+ grand que le milieu il est envoyé à A
	Le a fait en sorte que je trie par en haut et par en bas 
	en même temps en gagnant du temps;

3- En déroulant la récursion je me sert de push_a_top pour 
passer sur tout mon bloc récursif
	Ce faisant, je sort le bloc et applique ra si le 
	top de mon a est le next à sort
	Dans le cas contraire je pousse le nombre à B

	Je vérifie toujours après chaque bloque si B contient le prochain 
4- Finalement quand j'ai fini la première moitié; 
	j'apelle push_a_top avec le max de A pour tout pousser à B en sortant
	Je rapelle par la suite sort_b et repart sur 2-3;
	*/

void	sort_big(t_stacks *s)
{
	int	mid;

	mid = average(&s->a);
	split_a_lower(s, mid);
	sort_b(s);
	push_a_top(s, stack_max(&s->a));
}
