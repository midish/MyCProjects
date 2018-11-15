#include <stdlib.h>
#include <stdio.h>

// Производит поиск слов в строке
static int	ft_wordcount(char *s)
{
	int		i; // Счётчик по индексу в массиве
	int		w; // Счётчик найденых слов, любой набор символов между \n \t ' ' явл. словом 

	i = 0; 
	w = 0;
	// Пока индекс строки не дошел до \0
	while (s[i])
	{
		// Если индекс не равен межсловарному символу, то счётчик слов прибавляет на один
		if (s[i] != '\t' && s[i] != ' ' && s[i] != '\n')
			w += 1;
		// Пока хожу по буквам и не достану следующий межсловарный символ индекс растет
		while (s[i + 1] && s[i] != '\t' && s[i] != ' ' && s[i] != '\n')
			i += 1;
		i += 1;
	}
	// Возвращаю кол-во найденых слов
	return (w);
}

// Функция считает слину слова
static int	ft_wordlen(char *s)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (s[i] == '\t' || s[i] == ' ' || s[i] == '\n')
		i += 1;
	while (s[i] && s[i] != '\t' && s[i] != ' ' && s[i++] != '\n')
		len += 1;
	return (len);
}

char		**ft_split_whitespaces(char *str)
{
	int		i; // Счётчик для w[i][j]
	int		j; // w[i][j]
	int		k; // str[k]
	char	**w; // Двумерный массив который будет хранить в каждой ячейке по слову

	i = 0;
	k = 0;
	// Если строка пустая или не удалось выделить память под двумерный массив,
	// то вернуть NULL
	if (!str || !(w = (char **)malloc(sizeof(char*) * (ft_wordcount(str) + 1))))
		return (NULL);
	// Пока i меньше кол-ва слов
	while (i < ft_wordcount(str))
	{
		// Если не удалось выделить память под слово в w[i], то вернуть NULL
		if (!(w[i] = (char *)malloc(sizeof(char) * (ft_wordlen(&str[k]) + 1))))
			return (NULL);
		j = 0;
		// Пока эл-нет в переданной строке равен межсловарному символу иду дальше
		while (str[k] == '\t' || str[k] == ' ' || str[k] == '\n')
			k += 1;
		// Пока str не равен \0 и не равен межсловарному символу, то записать слово в w[i][j]
		while (str[k] && str[k] != '\t' && str[k] != ' ' && str[k] != '\n')
			w[i][j++] = str[k++];
		w[i][j] = '\0';
		i += 1;
	}
	w[i] = NULL;
	return (w);
}

void    main(void)
{
    char *string = "Hello World!\nHave a nice day!\tToday is Wednesday!";
	char **hehe;
    hehe = ft_split_whitespaces(string);
}