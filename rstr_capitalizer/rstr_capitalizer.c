#include <unistd.h>

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

int main(int ac, char **av)
{
	int	s;
	int	c; 

	s = 1;
	if (ac > 1)
	{
		while (av[s])
		{
			c = 0;
			while(av[s][c])
			{
				if (av[s][c] >= 'A' && av[s][c] <= 'Z')
					av[s][c] += 32;
				if ((av[s][c] >= 'a' && av[s][c] <= 'z') && (av[s][c + 1] == 9
					|| av[s][c + 1] == 10 || av[s][c + 1] == 32
						|| av[s][c + 1] == 0))
					av[s][c] -= 32;
				c++;
			}
			s++;
		}
	}
}