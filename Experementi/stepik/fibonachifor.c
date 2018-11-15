#include <stdio.h>

int     main(void) 
{
    int fib;
    int res, a, b;

    a = 1;
    b = 1;
    scanf("%d", &fib);
    if (fib == 1 || fib == 2)
    {   
        res = 1;
        printf("%d", res);
        return (0);
    }
    for (int i = 3; i <= fib; i++)
    {
        res = a + b;
        a = b;
        b = res;
    }
    printf("%d", res);
    return 0;
}