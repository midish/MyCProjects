#include <stdio.h>

void    main(void)
{
    int a;
    int b;

    a = 21;
    b = 42;

    int *pa = &a;
    int *pb = &b;

    printf("%d %d\n", a, b);
    ft_swap(&a, &b);
    printf("%d %d\n", *pa, *pb);
}