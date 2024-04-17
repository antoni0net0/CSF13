#include <stdio.h>

int main(){

            int i, j, numero, eh_divisel = 1, mmc;

            printf("digite um numero positivo: ");
            scanf("%d", &numero);

            for(i = 1; i <= numero; i++){

                for(j = 2; eh_divisel == 1; j++){

                    if(i % j == 0)
                        eh_divisel = 0;

                }

                if(eh_divisel == 1)
                    mmc = j;
            }

                printf("%d", j);

return 0;
}
