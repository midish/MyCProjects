/* Выделить под массив динамически память.
Обращаться к элементам массива необходимо используя указатель.

1. В одномерном массиве, состоящем из n вещественных элементов, вычислить: 
- сумму отрицательных элементов массива;
- произведение элементов массива, расположенных между максимальным и минимальным 
элементами
*/

#include <stdio.h>
#include <stdlib.h>

// Вычисляет сумму отрицательных элементов массива
int     negativeSum(int *array, int size)
{
    int *numbers;
    int sum;

    sum = 0;
    numbers = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
    {
        numbers[i] = array[i];
    }
    for (int j = 0; j < size; j++)
    {
        if (numbers[j] < 0)
            sum = sum + numbers[j];
    }
    return (sum);
}

// Вычисляет произведение элементов массива, расположенных между максимальным и минимальным элементами
int     multiplicationMinMax(int *array, int size)
{
    int *numbers;
    int multi;
    int min;
    int max;

    min = 0;
    max = 0;
    numbers = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
    {
        numbers[i] = array[i];
    }
    for (int j = 0; j < size; j++)
    {
        if (numbers[j] < min)
            min = numbers[j];
        if (numbers[j] > max)
            max = numbers[j];
    }
    multi = min * max;
    return (multi);
}

void    main(void)
{
    int array[5] = {11, -12, 15, -55, 113};
    int negatSum;
    int multiMaxMin;

    negatSum = negativeSum(array, 5);
    multiMaxMin = multiplicationMinMax(array, 5);
    printf("Сумма отрицательных элементов = %d\n", negatSum);
    printf("Произведение между макс. и мин. элементом = %d\n", multiMaxMin);
}