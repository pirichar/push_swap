#include <stdio.h>
	/*if (ft_strcmpr(argv[1], argv[2]) == 0)
		printf("Equal\n");
	else if ((ft_strcmpr(argv[1], argv[2]) < 0))
		printf("1 is smaller then 2\n");
	else
		printf("1 is bigger then 2\n");*/
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

//look for doubles
/*
int	l4D(int argc, char **argv)
{
	int	count = c_args(argc);
	int	array[count] = {0};
	int	i;

	i = 0;
	while(i < argc)
	{
		if(argv[i][0] == 0)
			array[argv[i][0]] = 1;
		if(argv[i][0] == 1)
			return (-1);
		i++;
	}
	return(i);
}*/

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
	/*if(l4d(argc, argv) < 0)
	{
		printf("ERROR DOUBLEES");
		return (0);
	}*/
		

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
		if (ft_strcmpr(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i + 1];
				argv[i + 1] = argv[i];
				argv[i] = tmp;
				i = 0;
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
}
