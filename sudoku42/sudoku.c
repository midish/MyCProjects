#include <stdio.h>
#include <stdlib.h>

int     **preobrazovanieStrok(char **str)
{
    int i = 0;
    int x = 0;
    int y = 0;
    int **digitMatrix = NULL;
    // int digit = 0;

    // Выделяю память под массив из ЦИФР
    digitMatrix = (int **) malloc(9 * sizeof(int*));
    while (i < 9)
    {
        digitMatrix[i] = (int *) malloc(9 * sizeof(int));
        i++;
    }
    while (x < 9)
    {   
        while (y < 9)
        {
            if (str[x][y] >= '1' && '9' >= str[x][y])
            {
                digitMatrix[x][y] = str[x][y] - '0';
            }  
            else if (str[x][y] == '.')
            {
                digitMatrix[x][y] = 0;
            }
            y++;
        }
        if (y == 9)
        {
            y = 0;
        }
        x++;
    }
    return (digitMatrix);
}

// int     main(void)
// {
//     char *str1[9] = { "111111111", "222222222", "333333333", "444444444", "555555555", "666666666", "777777777", "888888888", "999999999" };
//     int **strNbr = NULL;
//     int i = 0;
//     int j = 0;

//     strNbr = preobrazovanieStrok(str1);
//     while (i < 9)
//     {
//         while (j < 9)
//         {
//             printf("%d", strNbr[i][j]);
//             j++;
//         }
//         i++;
//         if (j == 9)
//         {
//             printf("\n");
//             j = 0;
//         }
//     }
//     return (0);
// }

int     main(int argc, char **argv)
{
    int **sudokuMatrix = NULL;
    int i = 0;
    int j = 0;
    
    if (argc == 10)
    {
        sudokuMatrix = preobrazovanieStrok(&argv[1]);
        while (i < 9)
        {
            while (j < 9)
            {
                printf("%d", sudokuMatrix[i][j]);
                j++;
            }
            i++;
            if (j == 9)
            {
                printf("\n");
                j = 0;
            }
        }
    }
    else
    {
        printf("Error!\n");
    }
    return (0);
}