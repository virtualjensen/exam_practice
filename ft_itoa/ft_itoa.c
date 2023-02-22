#include <stdlib.h>

//PASSED

int	nbr_len(long nbr)
{
	long	i;

	i = 1;
	if (nbr < 0)
	{
		i++;
		nbr *= -1;
	}
	while (nbr > 9)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

int	div_nbr(long len)
{
	long	i;

	i = 1;
	if (len == 1)
		return (1);
	while (len > 1)
	{
		i *= 10;
		len--;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	int	i;
	int	len;
	long	n;
	char	*res;

	i = 0;
	n = nbr;
	len = nbr_len(n);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		res[i++] = '-';
		len--;
	}
	while (i < nbr_len(nbr))
	{
		res[i++] = (n / div_nbr(len--) % 10) + 48;
	}
	res[i] = '\0';
	return (res);

}

// #include <stdio.h>

// int main()
// {
// 	printf("conversion: %s\n", ft_itoa(2147483647));
// }