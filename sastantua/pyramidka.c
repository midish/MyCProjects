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
    int i;
    int weight;
    int j;

    i = 1;
    weight = 1;
    while(i <= size)
    {
        j = 0;
        while(j < weight)
        {
            ft_putchar('A');
            j++;
        }
        weight = weight + 2;
        ft_putchar('\n');
        i++;
    }
}

void    main(void)
{  
    printf("Vvedite visoty piramidki: \n");
    pyramidka(5);
}