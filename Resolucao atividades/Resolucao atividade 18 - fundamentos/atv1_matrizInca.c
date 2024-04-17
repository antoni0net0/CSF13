#include <stdio.h>
#include <stdlib.h>
#define N 4

void geraMatrizInca (int matriz [N][N])
{
    int i, j, cont = 1, aux = 0, n = N -1;
    while(cont != N*N)
    {
        for(i = aux; i < N - aux; i++)
            matriz[aux][i] = cont++;

        aux++;

        for(i = aux; i < N; i++)
            matriz[i][N - aux] = cont++;

       aux++;

       for(i = N - aux; i >= 0; i--)
            matriz[N-aux][i] = cont++;

       for(i = N - aux; i >= n; i--)
            matriz[i][N-aux] = cont++;

    }
}

int main()
{
    int matriz[N][N];
    int i, j;

    geraMatrizInca(matriz);

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
            ("%d", matriz[i][j]);
    }

    return 0;
}
