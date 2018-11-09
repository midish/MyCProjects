// Allowed functions : ft_putchar
// Подключил stdlib.h для работы atoi
#include <stdlib.h>
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     calc_base(int size)
{
    int floor; // этаж пирамиды
    int width; // ширина
    int floor_step; // шаг для этажей

    floor = 1;
    width = 1;
    floor_step = 4;
    while (floor <= size)
    {
        width = width + 2 * (2 + floor);
        floor++;
        width += floor_step;
        if (floor % 2 && floor < size)
            floor_step = floor_step + 2;
    }
    width = width - floor_step;
    return (width);
}

void	put_line(int space)
{
	int pos;

	pos = 0;
	while (pos < space)
	{
		ft_putchar(' ');
		pos++;
	}
}

void	put_blocks(int size, int floor, int width, int step)
{
	int door;
	int pos;

	door = 1 + 2 * ((floor - 1) / 2);
	pos = 0;
	while (pos < width)
	{
		if (pos == 0)
			ft_putchar('/');
		else if (pos == width - 1)
			ft_putchar('\\');
		else
		{
			if (floor == size && pos >= (width - door) / 2
					&& pos < (width + door) / 2 && 2 + floor - step <= door)
				if (door >= 5 && step == 2 + floor - door / 2 - 1
						&& pos == (width + door) / 2 - 2)
					ft_putchar('$');
				else
					ft_putchar('|');
			else
				ft_putchar('*');
		}
		pos++;
	}
}

void    sastantua(int size)
{
    int floor; // этажи
    int height; // строки на этаже
    int step; // шаг для счётчика
    int width; // ширина строки

    // Если размер меньше 1, то ничего не выводить
    if (size < 1)
        return ;
    floor = 1;
    width = 1;
    // Хожу по этажам до тех пор пока не дойду до значения size
    while (floor <= size)
    {
        // Определяет количество строк(высоту) на этаже
        height = floor + 2;
        step = 0;
        while (step < height)
        {
            width = width + 2;
            put_line((calc_base(size) - width) / 2);
            put_blocks(size, floor, width, step);
			ft_putchar('\n');
			step++;
		}
		floor++;
		width += 4 + 2 * ((floor - 2) / 2);
	}
}

int	    main(int argc, char *argv[])
{
	if (argc < 2)
		return 0;

	sastantua(atoi(argv[1]));
}