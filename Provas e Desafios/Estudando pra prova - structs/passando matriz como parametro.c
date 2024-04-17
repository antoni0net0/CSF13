#include <stdio.h>
#include <stdlib.h>
#define N 3


int ehSimetrica (int matriz [N][N])
{
    int i, j, eh_simetrica;

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
            {
                if(matriz[i][j] == matriz [j][i])
                    eh_simetrica = 1;
                else
                    eh_simetrica = 0;
            }
    }

}

int main ()
{
int i, j;
int matriz [N][N];
/* Lê */
for (i = 0; i < N; i++)
{
for (j = 0; j < N; j++)
{
printf ("Elemento em (%d, %d): ", i, j);
scanf ("%d", &(matriz [i][j]));
}
}
if (ehSimetrica (matriz))
printf ("Simetrica!\n");
else
printf ("Nao eh simetrica!\n");
return (0);
}
