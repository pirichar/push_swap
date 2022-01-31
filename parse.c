/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 12:24:25 by pirichar          #+#    #+#             */
/*   Updated: 2022/01/31 09:42:32 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//parse the arguments
int	parse(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 2;
	if (argc == 2 && s_argv1(argv) == 0)
		return (0);
	if (argc > 2)
	{
		while (argv[i])
		{
			if (check_is_int(argv[i]) == 0)
				return (0);
			while (argv[j])
			{
				if (ft_atol(argv[i]) == ft_atol(argv[j]))
					return (0);
				j++;
			}
			i++;
			j = i + 1;
		}
	}
	return (1);
}

long	ft_atol(const char *str)
{
	int		i;
	int		n;
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
		return (0);
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

void strarr_free(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);
}

int	s_argv1(char **argv)
{
	char	**rtn;
	int		i;

	i = 0;
	rtn = ft_split(argv[1], ' ');
	while (rtn[i])
	{
		if (check_is_int(rtn[i]) == 0)
		{
			strarr_free(rtn);
			return (0);
		}
		i++;
	}
	strarr_free(rtn);
	return (i);
}
