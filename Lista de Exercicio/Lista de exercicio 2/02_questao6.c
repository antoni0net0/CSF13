#include <stdio.h>

int main(){


        int numero, segundos , minutos , horas , dias ;

        printf("digite um numero de segundos: ");
        scanf("%d", &numero);


        dias = numero / 86400;
        horas = (numero % 86400) / 3600;
        minutos = (numero % 86400 % 3600) / 60;
        segundos = (numero % 86400 % 3600 % 60);

        printf("%d dias %d horas %d minutos %d segundos", dias, horas, minutos, segundos);

    return 0;
}
