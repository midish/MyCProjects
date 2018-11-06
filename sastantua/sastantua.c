// Allowed functions : ft_putchar
// Подключил stdlib.h для работы atoi
#include <stdlib.h>
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     strvalue(int level)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while(i < level)
    {
        count = (3 + i) + count;
        i++;
    }
}
void    sastantua(int size)
{
    int stage;
    int row;

    stage = 1; // Начинаем с перевого этажа
    row = 1; // Ряд
    // Главные цикл, который ходит по этажам
    while(stage <= size)
    {
        while(row <= strvalue(size))
        {

        }
        row++;
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