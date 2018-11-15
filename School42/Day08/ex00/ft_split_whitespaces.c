/*
• Create a function that splits a string of characters into words.
• Separators are spaces, tabs and line breaks.
• This function returns an array where each box contains a character-string’s address
represented by a word. The last element of this array should be equal to 0 to
emphasise the end of the array.
• There can’t be any empty strings in your array. Draw the necessary conclusions.
• The given string can’t be modified.
*/

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

static int	ft_wordlen(char *s, int index)
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

char     **ft_split_whitespaces(char *str)
{
    int countWord;
    char **boxOfWords;
    int k;
    int word;

    k = 0;
    countWord = ft_wordcount(str);
    boxOfWords = (char **) malloc(sizeof(char *) * countWord);
    for(int i = 0; i < countWord; i++)
    {
        boxOfWords[i] = (char *) malloc(sizeof(char) * (ft_wordlen(str, i) + 1));
    }
    for (int j = 0; j < countWord; j++)
    {
        word = 0;
        while(str[k] != '\0' && str[k] != ' ')
        {
            boxOfWords[j][word] = str[k];
            k++;
            word++;
        }
        boxOfWords[j][word] = '\0';
        k++;
    }
    return (boxOfWords);
}

void    main(void)
{
    char *string = "Hello World! Have a nice day! Today is Wensday!";
    char **box;
    box = ft_split_whitespaces(string);
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; box[i][j] != '\0'; j++)
        {
            printf("%c", box[i][j]);
        }
        printf("\n");
    }
}