/* Факториал. 
Для целого числа k(0≤k≤12) посчитать k!.
Входные данные:
Одно целое число k, (0≤k≤12).

Выходные данные: 
Значение факториала числа k.
*/
#include <stdio.h>

int     main() 
{
    int k;
    int result;

    scanf("%d", &k);
    if (k >= 0 && k <= 12)
    {
        if (k == 0)
            result = 1;
        else
        {
            result = 1;
            for (int i = 1; i <= k; i++)
            {
                result = result * i;
            }
        }
        printf("%d\n", result);
        return 0;
    }
    else
        return 0;
}