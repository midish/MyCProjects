#include <stdio.h>

void    main(void)
{
    char *str1 = "Holla World!";
    char *str2 = "Hello World!";
    int compare;

    compare = ft_strcmp(str1, str2);
    printf("Sravnenie dvyh strok \"%s\" i \"%s\" - raznica %d", str1, str2, compare);
}