#include <stdio.h>

void    main(void)
{
    char *str1 = "Hello World!";
    char *str2 = NULL;

    // Передаю строку str1 в функцию для дубликата
    str2 = ft_strdup(str1);
    printf("str1 - %s, str2 - %s\n", str1, str2);
}