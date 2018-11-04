#include <stdint.h>
#include <stdio.h>
//#include "ft_point.h"
#ifndef FT_POINT_H
# define FT_POINT_H

// Создаю структуру s_point
struct s_point
{
    int x;
    int y;
}   t_point; // объявляю экземпляр этой структуры
#endif

// Создаю фун-цию set_point в которую передаю 
// указатель на переменную point типа struct s_point
void    set_point(struct s_point *point)
{
    // Через указатель присваеваю значения экземпляра point для переменных x и y
    // которые находятся в struct s_point
    point->x = 42;
    point->y = 21;
}

int     main(void)
{
    // Объявляю переменную point с типом данных struct s_point
    struct s_point point;

    // Вызываю фун-цию set_point и передаю её адрес переменной point
    set_point(&point);
    // Вывожу в терминал значения которые присвоих в фун-ции set_point
    printf("%d, %d", point.x, point.y);
    // Завершаю работу программы 
    return (0);
}