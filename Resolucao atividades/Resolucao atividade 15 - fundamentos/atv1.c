#include <stdio.h>

int main()
{
    int pedras, sapos, i, j;

    scanf("%d %d", &pedras, &sapos);

    int  posicao[sapos], salta[sapos], resposta[pedras], possibilidade;

    for(i = 0; i < sapos;i++)
     {
        scanf("%d %d", &posicao[i],&salta[i]);

        possibilidade = posicao[i] - salta[i];

        if(possibilidade >= 0)
            resposta[possibilidade] = 1;

        possibilidade = posicao[i] + salta[i];

        if(possibilidade <= (pedras-1))
            resposta[possibilidade] = 1;

        resposta[posicao[i]] = 1;
     }

    for(i = 0; i < pedras;i++)
        printf("%d", resposta[i]);

    return 0;
}
