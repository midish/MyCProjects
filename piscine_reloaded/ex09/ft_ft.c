#include <unistd.h>
#include <stdio.h>

void    ft_ft(int *nbr)
{
    int a = 42;
    nbr = &a;
    printf("%d\n", *nbr);
}