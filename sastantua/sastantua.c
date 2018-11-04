// Allowed functions : ft_putchar
// Подключил stdlib.h для работы atoi
#include <stdlib.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
void    sastantua(int size)
{
    while(size > 0)
    {
        ft_putchar('a');
        size--;
    }
}

void    main(int argc, char **argv)
{
    if (argc < 2)
    {
        ft_putchar('\n');
    }
    else
    {
        sastantua(atoi(argv[1]));
    }
}