#include <stdio.h>
#include <string.h>
#define TAM 100

int qtd_palavras(char *palavras)
{
    int qtd_palavras = 0, i = 0;

    while(palavras[i] != '\0')
    {
        if(palavras[i] >= 32 && palavras[i] <= 64)
            qtd_palavras++;
        i++;
    }

    return qtd_palavras + 1;
}

int main()
{
    char texto[TAM];

    fgets(texto, TAM, stdin);

    printf("%d", qtd_palavras(texto));
    return 0;
}
