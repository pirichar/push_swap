#include <stdio.h>
	/*if (ft_strcmpr(argv[1], argv[2]) == 0)
		printf("Equal\n");
	else if ((ft_strcmpr(argv[1], argv[2]) < 0))
		printf("1 is smaller then 2\n");
	else
		printf("1 is bigger then 2\n");*/
int	ft_atoi(const char *str)
{
	int	i;
	int	n;
	int	res;

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

int ft_strcmpr(char *s1, char *s2)
{
	int i ;
	
	i = 0;
	while((unsigned char)s1[i] && (unsigned char)s1[i] == (unsigned char)s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

//function to count how many args
//start from 1 cuz of the a.out
int	c_args(int argc)
{
	int i;

	i = 1;
	while(i < argc)
	{
		i++;
	}
	return (i);
}

int	check_is_int(char *str)
{
	int	i;

	i = 0;
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

	i = 0;
	j = 1;

	//argv[i] 0 is ./a.out 1 is the first number provided
	while (argv[i])
	{
    	while (argv[j])
		{
			// I HAVE TO CHANGE THIS THIS IS SHIET
			if (check_is_int(argv[j]) == 0)
    			{
					printf("You must provide numbers\n");
					return(0);
				}
			// 
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

	if (argc < 3)
	{
		printf("Error, insert more then one digit to sort\n");
		return (0);
	}

	if(l4p(argv) == 0)
	{
		return (0);
	}
		

	//printf shenanigan
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
		//Need to find a way to work around the negatives
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

	//printf shenanigan
	i = 1 ;
	while(i < argc)
	{
		printf("----THE AFTER PRINT----");
		printf("This is argv[%i] = %s\n", i, argv[i]);
		i++;
	}

	/*testing my atoi
	char *str = {"425"};
	printf("This is my atoi %d\n",ft_atoi(str));*/

}
