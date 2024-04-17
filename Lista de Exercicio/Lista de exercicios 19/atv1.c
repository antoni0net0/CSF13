#include <stdio.h>
#include <stdlib.h>

void destroiTrianguloDePascal (int** t, int grau)
{
    ///aqui eu tenho que colocar um free pra evitar o memory leaking
    int i;
    for(i = 0; i < grau; i++)
        free(t[i]);
    free(t);
}

int** geraTrianguloDePascal (int grau)
{
    int i, j, **t_pascal, cont = 1;

    /// dando tamanho de linhas a matriz
    t_pascal = (int **) malloc ( grau * sizeof (int *));


    ///dando tamanho de colunas a matriz
    for(i = 0; i < grau; i++)
        t_pascal[i] = (int *) malloc ( grau * sizeof (int));

    for(i = 0; i < grau; i++)
    {
        for(j = 0; j < grau; j++)
        {
            t_pascal[i][j] = 0;
        }
    }

    for(i = 0; i < grau; i++)
    {
        for(j = 0; j < cont; j++)
        {
            t_pascal[i][0] = 1;
            ///o bo tá no if
            if(cont > 1 && cont < grau)
               {
                    t_pascal[i][j+1] += t_pascal[i][j];
                    cont++;
               }
        }
    }

    for(i = 0; i < grau; i++)
    {
        for(j = 0; j < grau; j++)
            printf("%d\t", t_pascal[i][j]);

        printf("\n");
    }


    return t_pascal;
}

int main()
{
    int **triangulo, i, j, grau;

    printf("digite o grau desejado do triangulo de pascal: ");
    scanf("%d", &grau);

    triangulo = geraTrianguloDePascal (grau);

    /**for(i = 0; i < grau; i++)
    {
        for(j = 0; j < grau; j++)
            printf("%d\t", triangulo[i][j]);

        printf("\n");
    }*/

    destroiTrianguloDePascal (triangulo, grau);

    return 0;
}
