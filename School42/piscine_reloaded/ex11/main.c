#include <stdio.h>
#include <stdlib.h>

void    main(void)
{
    int a = 42;
    int b = 21;

    int *x = NULL;
    int *y = NULL;

    ft_div_mod(a, b, &x, &y);
}