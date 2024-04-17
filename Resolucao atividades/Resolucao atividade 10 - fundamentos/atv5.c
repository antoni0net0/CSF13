#include <stdio.h>

unsigned int inverteNum (unsigned int n){

       unsigned int numero_inverso, guarda_numero = 0, unidades = 0;

        while(n > 0){

            if(n < 100)
            {
                numero_inverso += (n/10);
                n = 0;
                printf("%d", guarda_numero);
            }

            else
            {
                numero_inverso = n % 10;
                guarda_numero += (numero_inverso * 10);
                n -= numero_inverso;
                unidades++;

            }

        }

        return guarda_numero / 10;

}

int main(){

        int numero, resultado;

        printf("digite um numero: ");
        scanf("%d",&numero);

        resultado = inverteNum(numero);

        printf("%d", resultado);



return 0;
}
