#include <stdio.h>

void    main(void)
{
    int number;
    int sqrtNum;

    scanf("%d", &number);
    sqrtNum = ft_sqrt(number);
    printf("Sqrt root number of %d = %d\n", number, sqrtNum);
}