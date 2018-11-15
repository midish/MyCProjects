#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *MyFunc(char *str)
{
    char *words;
    // Если строка пустая, то
    if (!str)
        printf("aaaaaa\n");
    // Если в строке есть символы, то
    if (str)
        printf("bbbbbb\n");
    // Если память НЕ выделилась, то
    if (!(words = (char *)malloc(sizeof(char) * (strlen(str)+ 1))))
        printf("!!!!!!!\n");
    // Если память выделилась, то
    if (words = (char *)malloc(sizeof(char) * (strlen(str)+ 1)))
        printf("???????\n");
}

void    main(void)
{
    // char *str_1 = NULL;
    char *str_2 = "Hello World!";
   //  printf("Результат первой MyFunc\n");
    // MyFunc(str_1);
    printf("Результат второй MyFunc\n");
    MyFunc(str_2);
}