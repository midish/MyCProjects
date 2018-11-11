#include <stdio.h>

int     main() 
{
    int expression;

    scanf("%d", &expression);
    for (int i = 1;i <= expression; i++)
    {
        printf("%d ", i);
    }
    return 0;
}