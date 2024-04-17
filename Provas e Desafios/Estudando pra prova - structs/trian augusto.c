#include <stdio.h>
#include <stdlib.h>
#define GRAU 7

int** geraTrianguloDePascal (int grau);
void destroiTrianguloDePascal (int** t, int grau);

int main ()
{
    int grau = 7;
    int i, j;
    int** mat;
    mat = geraTrianguloDePascal(grau);

    for(i = 0; i < grau; i++)
    {
        for(j = 0; j < grau; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    destroiTrianguloDePascal(mat, grau);


return 0;
}

int** geraTrianguloDePascal (int grau)
{
    int i, j, **matriz;
    matriz = (int**) malloc (grau * sizeof(int*));
    for(i = 0; i < grau; i++)
        matriz[i] = (int*) malloc (grau * sizeof(int));

    for(i = 0; i < grau; i++)
    {
        for(j = 0; j < grau; j++)
        {
            matriz[i][j] = 0;
            matriz[i][0] = 1;
        }
    }

    matriz[0][0] = 1;

    for(i = 1; i < grau; i++)
    {
        for(j = 0; j < grau; j++)
        {
            if(j > 0)
                matriz[i][j] = matriz[i - 1][j - 1] + matriz[i-1][j];
        }
    }

    return matriz;
}

void destroiTrianguloDePascal (int** t, int grau)
{
    int i;

    for(i = 0; i < grau; i++)
        free(t[i]);

    free(t);
}
