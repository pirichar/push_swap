#include <stdio.h>

long	ft_atoi(const char *str)
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

int main(void)
{
	printf("This is my atoi of int min %ld\n", ft_atoi("-2147483648"));
	printf("This is my atoi of one less then int min %ld\n", ft_atoi("-2147483649"));

}