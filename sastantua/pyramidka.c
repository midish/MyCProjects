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
    int weight; // Ширина строки в символах
    int j;

    i = 1;
    weight = 1;
    // Общий цикл который печатает уровни пирамиды, начиная с первого
    while(i <= size)
    {
        j = 0;
        // Цикл выводит кол-во символов на строке
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
    int value;

    printf("Vvedite visoty piramidki: ");
    scanf("%d", &value);
    pyramidka(value);
}