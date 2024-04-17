#include <stdio.h>

int proxFibonacci (int n){

            int soma, i = 0,  primeiro_termo = 0, segundo_termo = 1;


            for(i = 0; segundo_termo < n; i++){

                    soma = primeiro_termo + segundo_termo;
                    primeiro_termo = segundo_termo;
                    segundo_termo = soma;
            }

            printf("o termo fibonacci proximo eh: %d", segundo_termo);

            return segundo_termo;



}

int main(){

            int resultado, numero;

            printf("digite um numero: ");
            scanf("%d", &numero);

            resultado = proxFibonacci (numero);

return 0;
}
