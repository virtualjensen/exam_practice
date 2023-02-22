// lcm attempt (does not work properly)

/*Write a function who takes two unsigned int as parameters and returns the 
computed LCM of those parameters.

LCM (Lowest Common Multiple) of two non-zero integers is the smallest postive
integer divisible by the both integers.*/

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	n;
	unsigned int	store_div;

	n = 1;
	store_div = 0;
	// if (a == 0 || b == 0)
	// 	return (0);
	while (n < a && n < b)
	{
		if (n % a == 0)
			store_div = n;
		if (n % b == 0 && store_div == n)
			return (store_div);
		n++;
	}
	return (n);
}

#include <stdio.h>
int main()
{
	unsigned int	a = 1;
	unsigned int	b = 2;

	printf("res: %d", lcm(a, b));
}