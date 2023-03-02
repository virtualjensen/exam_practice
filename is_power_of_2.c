int is_power_of_2 (unsigned int n)
{
 while (((n % 2) == 0) && n > 1) /* While x is even and > 1 */
   n /= 2;
 return (n == 1);
}


// #include <stdio.h>
// int main()
// {
//     printf("%d\n", is_power_of_2(6));
//     return (0);
// }