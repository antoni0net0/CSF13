#include <stdio.h>

unsigned long long potencia (unsigned int base, unsigned int expoente){

    int i;
    unsigned long long resultado = base;

    for(i = 1; i < expoente; i++){
        resultado *= base;
    }

    return resultado;

}

int main(){

            int numero, multiplicador, resultado;

            printf("digite um numero: ");
            scanf("%d", &numero);

            printf("digite o expoente: ");
            scanf("%d", &multiplicador);

            resultado = potencia(numero, multiplicador);

            printf("%d", resultado);

return 0;
}
