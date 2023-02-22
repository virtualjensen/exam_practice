#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int	i;
	int j;

	i = 0;
	j = 0;
	dest = (char *)malloc(sizeof(src));
	while (src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	return (dest);
}

// int main()
// {
// 	printf("ft: %s\n", ft_strdup(""));
// 	printf("og: %s\n", strdup(""));
// }
