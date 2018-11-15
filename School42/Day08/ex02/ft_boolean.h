#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <stdlib.h>

// Чётное
# define EVEN_MSG 	"I have an even number of arguments.\n"
// Нечётное
# define ODD_MSG	"I have an odd number of arguments.\n"
# define SUCCESS	0

# define TRUE		1
# define FALSE		0

# define EVEN(x)	(!((x) % 2))

// Объявляю новый тип данных t_bool с типом int
typedef int			t_bool;

#endif