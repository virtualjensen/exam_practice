#include <unistd.h>

//passed exam system

/*Write a program that takes two strings and checks whether it's possible to
write the first string with characters from the second string, while respecting
the order in which these characters appear in the second string.

If it's possible, the program displays the string, followed by a \n, otherwise
it simply displays a \n.

If the number of arguments is not 2, the program displays a \n.*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	len;
	int	flag;

	i = 0;
	j = 0;
	flag = 0;
	if (ac == 3)
	{
		len = ft_strlen(av[1]);
		while (av[1][i] && av[2][j])
		{
			if (av[1][i] == av[2][j])
			{
				i++;
				j++;
				flag++;
			}
			if (av[2][j] != av[1][i])
			{
				j++;
			}
		}
		if (flag == len)
		{
			ft_putstr(av[1]);
			write(1, "\n", 1);
		}
		else 
			write(1, "\n", 1);
	}
	if (ac == 1)
		write (1, "\n", 1);
}