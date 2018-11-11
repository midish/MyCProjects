#include <stdio.h>

int     main() 
{
    int K, M;

    scanf("%d", &K);
    scanf("%d", &M);
    if (M > K)
    {
        if (K <= 0)
            K = 1;
        for (int i = 1; K <= M; i++)
        {
            printf("%d ", K);
            K++;
        }
        return (0);
    }
    else
        return (0);
}