#include <stdio.h>
#include <stdlib.h>
#define BUFF 100000

float* le_valores (int tamanho)
{
    float* valores;
    int i;

    valores = (float*) malloc (tamanho * sizeof (int) );

    for(i = 0; i < tamanho; i++)
        scanf("%f", &valores[i]);

    return (valores);
}

int main()
{
    int i;
    float* resposta;

    resposta = le_valores (10);

    for(i = 0; i < 10; i++)
        printf("%f\t", resposta[i]);


    free (resposta);
    return 0;
}
