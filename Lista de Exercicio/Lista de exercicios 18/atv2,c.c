#include <stdio.h>
#include <stdlib.h>
#define N_COLUNAS 3
#define N_LINHAS 3

int numero_repetido (int m[][N_COLUNAS], int N_LINHAS, N_COLUNAS)
{
    int i = 0, j = 0, eh_repetido = 0, aux;

    while(eh_repetido != 0)
    {
        aux = m[i][j];


        if(j - 1 == N_COLUNAS)
        {
            i++;
            j = 0;
        }

        j++;

        if(aux != m[i][j])
            eh_repetido = 1;
    }
}

int main()
{
    int i, j;
    int matriz [N_LINHAS][N_COLUNAS];
    srand (time (NULL));
    /* Preenche */

    for (i = 0; i < N_LINHAS; i++)
        for (j = 0; j < N_COLUNAS; j++)
            matriz [i][j] = rand () % 100;

    /* Imprime */
    for (i = 0; i < N_LINHAS; i++)
    {
        for (j = 0; j < N_COLUNAS; j++)
            printf ("%d\t", matriz [i][j]);
        printf ("\n");
    }

    /* Testa */
    if (temRepeticao (matriz))
        printf ("Tem elementos repetidos.");
    else
        printf ("Nao tem elementos repetidos.");

    return 0;
}
