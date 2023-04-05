char	to_lower(char s)
{
	if (s >= 'A' && s <= 'Z')
		s += 32;
	return (s);
}

int	get_digit(char c, int str_base)
{
	c = to_lower(c);
	if (str_base >= 0 && str_base <= 10)
	{
		if (c - '0' < str_base && c >= '0')
		{
			c = c - '0';
			return (c);
		}
		else
			return (-1);
	}
	if (c - '0' < str_base && c >= '0')
	{
		c = c - '0';
		return (c);
	}
	else if (c + 10 - 'a' >= 10 && c + 10 - 'a' < str_base)
	{
		c = c + 10 - 'a';
		return (c);
	}
	else	
		return (-1);

}


int	ft_atoi_base(const char *str, int str_base)
{
	int	num = 0;
	int	sign = 1;
	int digit;
	int	i = 0;

	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while(str[i])
	{
		digit = get_digit(str[i], str_base);
		if (digit >= 0)
		{
			num = (num * str_base) + digit;
			i++;
		}
		else
			return (num * sign);
	}
	return (num * sign);
}

#include <stdio.h>
int main(int ac, char **av)
{
	(void)ac;
	int	atoi_base = ft_atoi_base(av[1], 2);
	printf("%d\n", atoi_base);
}