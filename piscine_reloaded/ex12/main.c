#include <stdio.h>

void    main(void)
{
    int value;
    int res;

    scanf("%d", &value);
    res = ft_iterative_factorial(value);
    printf("Res of factorial !%d = %d\n", value, res);
}   