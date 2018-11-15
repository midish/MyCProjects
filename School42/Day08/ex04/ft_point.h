#ifndef FT_POINT_H
# define FT_POINT_H

// Объявляю новый тип данных с типом struct с именем s_point
typedef struct s_point 
{
    int x;
    int y;
} t_point; // t_point это экземпляр нового типа данных s_point

void    set_point(t_point *point);

#endif