#include <stdio.h>
#define N 5

int main(){

            int eh_primo = 1, contador_primos = 0, soma = 0, i, j;

            //numero
            for(i = 2; contador_primos < N; i++){

                //divisor
                for(j = 2; j <= i; j++){

                    if(i == j)
                        continue;


                    if(i % j == 0){
                        eh_primo = 0;
                        break;
                    }
                }

                if(eh_primo == 1){

                    contador_primos++;
                    soma += i;
                }

                eh_primo = 1;
            }

            printf("soma = %d", soma);

return 0;
}
