// Allowed functions : ft_putchar
// Подключил stdlib.h для работы atoi
#include <stdlib.h>
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    sastantua(int size)
{
    while(size > 0)
    {
        
        size--;
    }
}

void    main(int argc, char **argv)
{
    if(argc < 2)
    {
        ft_putchar('\n');
    }
    else
    {
        if(*argv[1] == '0')
        {
            return ;
        }
        else if(*argv[1] >= '1')
        {
            sastantua(atoi(argv[1]));
        }
    }
}