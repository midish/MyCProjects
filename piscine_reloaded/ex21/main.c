#include <stdio.h>

void    main(void)
{
    int a;
    int b;
    int i;
    int *array;

    a = 21;
    b = 42;
    // scanf("%d", &a);
    // scanf("%d", &b);
    array = ft_range(a, b);
    i = 0;
    while (array[i])
    {
        printf("%d ", array[i]);
        i++;
    }
    printf("\n");
}