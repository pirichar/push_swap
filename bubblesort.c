#include <stdio.h>
#include <limits.h>

static long	ft_atoi(const char *str)
{
	int	i;
	int	n;
	long	res;

	n = 1;
	i = 0;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
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

static int	check_is_int(char *str)
{
	int	i;

	i = 0;
	if (ft_atoi(str) < -2147483648 || ft_atoi(str) > 2147483647)
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

//look for problems
int l4p(char **argv)
{
	int i;
	int j;

	i = 1;
	j = 2;

	//argv[i] 0 is ./a.out 1 is the first number provided
	while (argv[i])
	{
    	while (argv[j])
		{
			if (check_is_int(argv[j]) == 0)
    			{
					printf("You must provide numbers\n");
					return(0);
				}
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				{
					printf("You have 2 numbers that are the same\n");
					return (0);
				}
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

int main(int argc, char **argv)
{
	printf("---This is argc---\n     ---%i---\n", argc);
	int i;
	char *tmp;

	//Maybe create a parse function with those 2 if and l4p ?
	//Include in this parse function the l4p and its sub functions
	//I could pass the argv to this function and do all the checking first
	
	if (argc == 1)
		return (0);	

	if (argc < 3)
	{
		printf("Error, insert more then one digit to sort\n");
		return (0);
	}
	//here I say if the function look 4 problem returns 0 you break out
	// I look for double; out of range and verify thats its real numbers provided
	if(l4p(argv) == 0)
	{
		return (0);
	}
		
	//printf arguments order before the sort
	i = 1;
	while(i < argc)
	{
		printf("----THE BEFORE PRINT------");
		printf("This is argv[%i] = %s\n", i, argv[i]);
		i++;
	}

	//bubble sort
	i = 1;
	while(i < argc - 1)
	{
		if (ft_atoi(argv[i]) > ft_atoi(argv[i + 1]))
			{
				tmp = argv[i + 1];
				argv[i + 1] = argv[i];
				argv[i] = tmp;
				i = 1;
			}
		else 
			i++;
	}
	//printf argument order after the sort
	i = 1 ;
	while(i < argc)
	{
		printf("----THE AFTER PRINT----");
		printf("This is argv[%i] = %s\n", i, argv[i]);
		i++;
	}
}
