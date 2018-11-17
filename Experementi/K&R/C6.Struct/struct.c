#include <stdio.h>

// Структура с именем point
struct point {
    int x;
    int y;
} ;



// Фун-ция makepoint принимает значения типа int и возвращает значение типа struct point
struct point makepoint(int x, int y)
{
    struct point temp;
    temp.x = x;
    temp.y = y;
    return temp;
}

int     main(void)
{
    // Объявляется новая переменная типа struct point с именем MyPoint
    struct point MyPoint;
    MyPoint = makepoint(5, 6);
    printf("x = %d, y = %d", MyPoint.x, MyPoint.y);
}