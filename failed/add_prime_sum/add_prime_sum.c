#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	sign;

	i = 0;
	num = 0;
	sign = 1;
	while (str[i])
	{
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
		if (str[i] == '-')
		{
			sign = -1;
			i++;
		}
		else if (str[i] == '+')
			i++;
		if (str[i] >= '0' && str[i] <= '9')
		{
			num = num * 10 + (str[i] - 48);
			i++;
		}
	}
	return (num * sign);
}

int main(int ac, char **av)
{
	int	atoid;
	int	n;
	int	sum;

	atoid = 0;
	n = 2;
	sum = 0;
	if (ac == 2 && atoid >= 0)
	{
		atoid = ft_atoi(av[1]);
		while (av[1])
		{
			while (n <= atoid)
			{
				if (n / n == 1 && n / 1 == n && (n % 3 != 0 || n % 2 != 0 || n % 5 != 0))
				{
					sum += n;
				}
				n++;
				write(1, &n, 1);
				printf("sum value: %d\n", n);
				exit(0);
			}
			write(1, "\n", 1);
		}
	}
	write (1, "0\n", 2);
}