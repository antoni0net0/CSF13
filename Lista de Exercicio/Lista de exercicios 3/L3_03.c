#include <stdio.h>

int main(){

            int numero;

            printf("digite um numero: ");
            scanf("%d", &numero);

            if(numero >= 0)
                printf("%d\n", numero);

            if(numero < 0){
                numero = numero  - numero - numero;
                printf("%d\n", numero);
            }


return 0;
}
