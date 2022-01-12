/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirichar <pirichar@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 12:24:25 by pirichar          #+#    #+#             */
/*   Updated: 2022/01/12 13:50:22 by pirichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//parse the arguments
int parse(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	j = 2;
		
	if (argc == 2 && s_argv1(argv) == 0)
	{
		printf("Error, insert more then one digit to sort\n");
		return (0);
	}
	if (argc > 2)
	{
		while (argv[i])
		{
			while (argv[j])
			{
				//probleme here if i compare with 0 ??? 
				//Maybe not since its only gonna happend if you provide something that doesnt work at the end
				if (ft_atol(argv[i]) == ft_atol(argv[j]))
					{
						printf("You have 2 numbers that are the same\n");
						return (0);
					}
				j++;
			}
			if (check_is_int(argv[i]) == 0)
    		{
				printf("You must provide numbers\n");
				return(0);
			}
			i++;
			j = i + 1;
		}
	}
	return (1);
}

long	ft_atol(const char *str)
{
	int	i;
	int	n;
	long	res;

	n = 1;
	i = 0;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		if (str[i] == '-')
			n = n * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * n);
}

int	check_is_int(char *str)
{
	int	i;

	i = 0;
	if (ft_atol(str) < -2147483648 || ft_atol(str) > 2147483647)
	{
		printf("You went too far or too low in the range\n");
		return (0);
	}
	if (str[0] == '-')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	s_argv1(char **argv)
{
	char **rtn;
	int i;

	i = 0;
	rtn = ft_split(argv[1], ' ');
	while (rtn[i])
	{
		if (check_is_int(rtn[i]) == 0)
		{
			printf("You provided a string with other stuff then ints\n");
			return (0);
		}
		i++;
	}
	return (1);
}
