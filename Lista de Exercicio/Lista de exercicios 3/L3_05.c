#include <stdio.h>

int main(){

            int velMaxima, velCarro;

            printf("digite a velocidade maxima da avenida: ");
            scanf("%d", &velMaxima);

            printf("digite a velocidade em que o carro esta se locomovendo: ");
            scanf("%d", &velCarro);

            if(velMaxima >= velCarro)
                printf("o carro esta na faixa de velocidade permitida");

            else
                printf("o carro ultrapassou o limite de velocidade e tera que pagar R$%d por isso", (velCarro - velMaxima) * 50);


return 0;
}
