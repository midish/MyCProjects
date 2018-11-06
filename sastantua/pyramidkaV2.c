// Что-бы понять как сделать састаунтуа, начну с более лёгкой задачи
// Построить пирамидку высотой переданной в функцию pyramidka
// Более сложная задача, посторить пирамидку со слэшами -
#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    pyramidka(int size)
{
    int i; // Ряд
    int weight; // Ширина строки в символах
    int j;
    int space; // Пробелы перед символами

    i = 1;
    weight = 3;
    // Общий цикл который печатает уровни пирамиды, начиная с первого
    while(i <= size)
    {
        space = size - i;
        j = 1;
        // Цикл ставящий пробелы
        while(space > 0)
        {
            ft_putchar(' ');
            space--;
        }
        // Цикл выводит кол-во символов на строке
        while(j < weight)
        {
            if(j == 1)
            {
                ft_putchar('/');
            }
            if(j == weight - 1)
            {
                ft_putchar('\\');
            }
            else
            {
                ft_putchar('A');
            }
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

    printf("Vvedite visoty pyramidki: ");
    scanf("%d", &value);
    pyramidka(value);
}