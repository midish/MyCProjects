#include <stdlib.h>

int     *ft_range(int min, int max)
{
    int *arrayInt;
    int i;

    if (min < max)
    {
        arrayInt = (int *) malloc ((max - min) * sizeof(int));        
        i = 0;
        while (min < max)
        {
            arrayInt[i] = min;
            min++;
            i++;
        }
        return (arrayInt);
    }
    else if (min >= max)
    {
        arrayInt = NULL;
        return (arrayInt);
    }
}