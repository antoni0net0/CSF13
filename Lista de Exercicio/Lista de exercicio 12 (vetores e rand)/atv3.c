#include <stdio.h>
#define N 10

int main()
{
    int vetor[N], i;

    for(i=1; i<=N;i++)
    {
        scanf("%d", &vetor[i-1]);
    }

    printf("\n\n");

    for(i=1; i<=N;i++)
    {
        if (i % 2 == 1)
            printf("%d, ", vetor[i-1]);
    }

    printf("\n");

    for(i=1; i<=N;i++)
    {
        if (i % 2 == 0)
            printf("%d, ", vetor[i-1]);
    }

    return 0;
}
