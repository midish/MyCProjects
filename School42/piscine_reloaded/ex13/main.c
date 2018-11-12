#include <stdio.h>

void    main(void)
{
    int num;
    int resrecfac;
    
    scanf("%d", &num);
    resrecfac = ft_recursive_factorial(num);
    printf("Res of recur factorial is !%d = %d\n", num, resrecfac);
}