#include <stdio.h>

int     main() 
{
    int K, M;
    int count;

    scanf("%d", &K);
    scanf("%d", &M);
    count = 0;
    if (M > K)
    {
        if (K <= 0)
            K = 1;
        for (int i = 1; K <= M; i++)
        {
            printf("%d ", K);
            K++;
            count++;
        }
        printf("\n%d", count);
        return (0);
    }
    else
        return (0);
}