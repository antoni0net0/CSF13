#include <stdio.h>

int ehBissexto(int ano)
{
    if(ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0 ))
        return 1;
    else
        return 0;
}

int main()
{
    int ano;
    scanf("%d", &ano);

    if(ehBissexto(ano) == 1)
        printf("o ano %d eh bissexto", ano);
    else
        printf("o ano %d nao eh bissexto", ano);

    return 0;
}
