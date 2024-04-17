#include <stdio.h>
#include <stdlib.h>
#define N 10

int main()
{
    int vetor[N], i, num_iguais[N], cont = 0;

    srand(0);

    for(i = 0; i < N; i++)
    {
        vetor[i] = rand() % N;
        printf("%d\n", vetor[i]);

        if (vetor[i] == i)
        {
             num_iguais[cont] = i;
             cont++;
        }
    }

    printf("\n\n");

    for(i = 0; i < cont; i++)
    {
        printf("%d\n", num_iguais[i]);
    }

    return 0;
}
