// Что-бы понять как сделать састаунтуа, начну с более лёгкой задачи
// Построить пирамидку высотой переданной в функцию pyramidka
#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    pyramidka(int size)
{
    int row;
    int i;

    if(size <= 0)
    {
       return ;
    }
    else if(size > 0)
    {
        row = 1;
        while(row <= size)
        {
            i = 1;
            while(i <= row)
            {
                ft_putchar('A');
                i++;
            }
            ft_putchar('\n');
            row++;
        }
    }
}

void    main(void)
{  
    printf("Vvedite visoty piramidki: \n");
    pyramidka(3);
}