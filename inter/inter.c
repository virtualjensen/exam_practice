#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	int j;
	int	f = 0;
	int rev;

	// i = 0;
	j = 0;
	if (ac == 3)
	{
		while (av[1][j])
		{
			i = 0;
			f = 0;
			while (av[2][i])
			{
				if (av[1][j] == av[2][i])
				{
					rev = j - 1;
					while (rev >= 0)
					{
						if (av[1][j] == av[1][rev])
							f = 1;
						rev--;	
					}
					if (f == 0)
						write(1, &av[1][j], 1);
					break ;
				}
				i++;
			}
			j++;
		}
	}
	write(1, "\n", 1);
}