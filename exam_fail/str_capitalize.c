#include <unistd.h>

int main(int ac, char **av)
{
    int s;
    int c;

    s = 1;
    if (ac > 1)
    {
        while (av[s])
        {
            c = 0;
            while (av[s][c])
            {
                if (av[s][c] >= 'A' && av[s][c] <= 'Z')
                    av[s][c] += 32;
                if ((av[s][0] >= 'a' && av[s][0] <= 'z'))
                    av[s][c] -= 32;
                if ((av[s][c] >= 'a' && av[s][c] <= 'z')
                    && (av[s][c - 1] == 9 || av[s][c - 1] == 10 || av[s][c - 1] == 32))
                    av[s][c] -= 32;
                write (1, &av[s][c], 1);
                c++;
            }
            write (1, "\n", 1);
            s++;
        }
    }
    if (ac == 1)
        write (1, "\n", 1);
    return (0);
}