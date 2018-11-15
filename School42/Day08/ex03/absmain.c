#include <stdio.h>
#include "ft_abs.h"

int     main(void)
{
    int x;
    int y;
    scanf("%d", &x);
    y = ABS(x);
    printf("ABS VALUE OF %d = %d", x, y);
    return (0);
}