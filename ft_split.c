#include <stdio.h>
#include <stdlib.h>

int	check_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	else
		return (0);
}

char	*ft_substr(char *str, int start, int end)
{
	int	i = 0;
	char *new_str;

	new_str = (char *)malloc(sizeof(char) * (end - start) + 2); //+ 1 for null amd +1 for index 0 (for example if start is 0 size - end would not make a difference)
	while (str[start] && start < end)
	{
		new_str[i] = str[start];
		start++;
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

char	**ft_split(char *str)
{
	char	**array;
	int	i;
	int	j;
	int	out;

	out = 0;
	i = 0;
	array = (char **)malloc(sizeof(char *) * 100000);
	while (str[i])
	{
		while (str[i] && check_space(str[i]) == 1)
			i++;
		if (str[i] == '\0')
			break ;
		j = i;
		while (str[j] && check_space(str[j]) == 0)
			j++;
		array[out] = ft_substr(str, i, j);
		out++;
		i = j;
	}
	array[out] = NULL;
	return (array);
}

int main()
{
	char *str;
	char **array_str;
	int i = 0;

	str = "boopity bopidy boo";
	array_str = ft_split(str);
	while (array_str[i] != NULL)
	{
		printf("%s\n", array_str[i]);
		i++;
	}
}