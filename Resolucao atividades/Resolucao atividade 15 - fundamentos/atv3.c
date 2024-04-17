#include <stdio.h>
#define TAM 5

int retorna_vetor(int *vetor, int *vetor_aux)
{
    int i, cont = 1, aux, j, guarda_posicao = 0;

    for(i = 0; i < TAM; i++)
    {
        aux = vetor[i];
        for(j = cont; j < TAM; j++)
        {
            if(aux == vetor_aux[j])
                guarda_posicao = j;

            if(guarda_posicao > 0)
            {
                vetor_aux[guarda_posicao] = vetor_aux[guarda_posicao + 1];
                vetor_aux[guarda_posicao + 1] = 0;
            }
        }
        guarda_posicao = 0;
        cont++;
    }

        for(i = 0; i < TAM; i++)
            printf("%d", vetor_aux[i]);
    return cont;

}

int main()
{
    int vetor1[TAM], vetor2[TAM], resultado, i;

    for(i = 0; i < TAM; i++)
       {
            scanf("%d", &vetor1[i]);
            vetor1[i] = vetor2[i];
       }

    resultado = retorna_vetor(vetor1, vetor2);
    printf("%d", resultado);


    return 0;
}
