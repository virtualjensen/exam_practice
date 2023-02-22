char	*ft_strcpy(char *s1, char *s2)
{
	// int	i;
	// int	j;

	// i = 0;
	// j = 0;
	// while (s1[i] && s2[j])
	// {
	// 	s1[i] = s2[j];
	// 	i++;
	// 	j++;
	// }
	// s1[j] = '\0';
	// return (s2);
	int i = 0;
	
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	// char s1[] = "";
// 	char s2[] = "WORLD";
// 	// char s1_og[] = "";
// 	char s2_og[] = "WORLD";

// 	// printf("before: s1 = %s s2 = %s\n", s1, s2);
// 	printf("ft: %s\n", ft_strcpy("", s2));
// 	// printf("before: s1_og = %s s2_og = %s\n", s1_og, s2_og);
// 	printf("og: %s\n", strcpy("", s2_og));
// }