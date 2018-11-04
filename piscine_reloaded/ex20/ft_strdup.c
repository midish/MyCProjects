#include <stdlib.h>

int     ft_strlen(char *src)
{
    int i;

    i = 0;
    while(src[i] != '\0')
    {
        i++;
    }
    return(i);
}

char    *ft_strdup(char *src)
{
    // Облявляю указатель, в который буду дублировать строку str1
    char *dest;
    int i;

    i = 0;
    // Выделяю память под строку с дубликатом
    dest = (char *) malloc(ft_strlen(src) + 1 * sizeof(char));
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}