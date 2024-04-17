#include <stdio.h>

double casasDecimais (double x);

int main(){

            double numero, resultado;


            printf("digite um numero: ");
            scanf("%lf", &numero);

            resultado = casasDecimais(numero);

            printf("%.2lf", resultado);

return 0;
}


double casasDecimais (double x){

        return x -= (int) x;
}
