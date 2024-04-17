#include <stdio.h>
#include <stdlib.h>
#define BUFF 1000
#define PROVAS 3
#define NUM_ALUNOS 3

int main()
{
    typedef struct{

        float notas[PROVAS];
        float media;
        char nome[BUFF];

    }Estudante;


    Estudante aluno[3];
    int i, j = 0;

    while(j != NUM_ALUNOS)
    {
        printf("digite o nome do aluno: ");
        fgets(aluno[j].nome, BUFF, stdin);
        printf("digite as %d notas de %s: ", PROVAS, aluno[j].nome);
        for(i = 0; i < PROVAS; i++)
        {
            scanf("%f", &aluno[j].notas[i]);
            aluno[j].media += aluno[j].notas[i];
        }
        printf("a media de %s eh: %.2f\n", aluno[j].nome, (aluno[j].media/3.0));
        j++;
    }




    return 0;
}
