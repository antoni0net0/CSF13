#include <stdio.h>
#include <stdlib.h>
#define BUFF 100000

int* funcao (int tamanho)
{
    int i, *valores;

    valores = (int*) malloc (tamanho * sizeof (int) );

    for(i = 0; i < tamanho; i++)
        valores[i] = rand() % 11;

    return (valores);
}

int* soma_vetores (int tamanho)
{
    int* vetor1, *vetor2;
    int i;

    valores = (int*) malloc (BUFF * sizeof (int) );

    for(i = 0; i < tamanho; i++)
        valores[i] = rand() % 11;

    return (valores);
}

int main()
{
    int i, *vetor1, *vetor2, *vetor3;

    vetor1 = funcao (10);
    vetor2 = funcao (15);


    for(i = 0; i < 20; i++)
        printf("%d\t", resposta[i]);


    free (resposta);
    return 0;
}
