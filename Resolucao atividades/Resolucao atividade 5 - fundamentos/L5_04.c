#include <stdio.h>

int main(){

            int numero;
            printf("digite um numero: ");
            scanf("%d", &numero);

            if(numero & 1)
                printf("numero eh impar\n");

            else
                printf("numero eh par\n");

return 0;
}
