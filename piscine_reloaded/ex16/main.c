#include <stdio.h>

void    main(void)
{
    int lenth;

    char *str = "Hello World!";
    lenth = ft_strlen(str);
    printf("Dlina stroki \"%s\" = %d", str, lenth);
}