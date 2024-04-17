#include <stdio.h>
#include <stdlib.h>
int main()
{
        float media, numero1, numero2, numero3, numero4, numero5;

        printf("digite um numero: ");
        scanf("%f", &numero1);

        printf("digite um numero: ");
        scanf("%f", &numero2);
        media = numero1 + numero2;
        printf("a media dos dois primeiros numeros digitados eh: %.2f \n\n", media / 2);

        printf("digite um numero: ");
        scanf("%f", &numero3);
        media += numero3;
        printf("a media dos tres primeiros numeros digitados eh: %.2f \n\n", media / 3);

        printf("digite um numero: ");
        scanf("%f", &numero4);
        media += numero4;
        printf("a media dos quatro primeiros numeros digitados eh: %.2f \n\n", media / 4);

        printf("digite um numero: ");
        scanf("%f", &numero5);
        media += numero5;
        printf("a media dos cinco numeros digitados eh: %.2f \n\n", media / 5);



return 0;
}
