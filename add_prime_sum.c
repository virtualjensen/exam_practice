#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	else if (n < 0)
	{
		write (1, "-", 1);
		n = -n;
	}
	if (n < 10)
	{
		ft_putchar(n + '0');
		return ;
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
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

int	is_it_prime(int input, int divisor)
{
	while (divisor >= 2 && divisor < input)
	{
		if (input % divisor != 0)
			divisor++;
		else
			return (0);
	}
	return (input);
}

int main(int ac, char **av)
{
	int	input;
	int	sum;
	int	divisor;
	int	store;

	sum = 0;
	input = 0;
	divisor = 2;
	if (ac == 2 && input >= 0)
	{
		input = ft_atoi(av[1]);
		while(input > 0)
		{
			if (is_it_prime(input, divisor) != 0)
			{
				store = is_it_prime(input, divisor);
				sum += store;
			}
		ft_putnbr(sum);
		}
		write(1, "\n", 1);
	}
	ft_putnbr(0);
	write(1, "\n", 1);
	return (0);
}