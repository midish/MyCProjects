#include <stdio.h>
#include <stdlib.h>

int     **preobrazovanieStrok(char **str)
{
    int i = 0;
    int x = 0;
    int y = 0;
    int **digitMatrix = NULL;
    int digit = 0;

    // Выделяю память под массив из ЦИФР
    digitMatrix = (int **) malloc(sizeof(int *) * 9);
    while (i < 9)
    {
        digitMatrix[i] = (int *) malloc(sizeof(int *) * 9);
        i++;
    }
    while (x < 9)
    {
        digitMatrix[x] = str[x];
        x++;
        while (y < 9)
        {
            if (str[x][y] <= '0' || '9' >= str[x][y])
            {
                digit = str[x][y] - '0';
                digitMatrix[x][y] = digit;
            }
            else if (str[x][y] == '.')
            {
                digit = 0;
                digitMatrix[x][y] = digit;
            }
            y++;
        }
    }
    
}

int     main(int argc, char **argv)
{
    int **sudokuMatrix = NULL;

    if (argc == 10)
    {
        sudokuMatrix = preobrazovanieStrok(argv);
    }
    else
    {
        printf("Error!\n");
    }
    return (0);
}