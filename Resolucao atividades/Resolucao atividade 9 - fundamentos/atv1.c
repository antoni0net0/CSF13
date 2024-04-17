#include <stdio.h>

int main(){

            int i, j, k;

            //resolucao letra a
            for(i = 1; i <= 6; i++){

                for(j = 1; j <= 6; j++){
                    printf("%d * %d\n", i, j);
                }
                printf("\n");
            }

            //resolucao letra b
            for(i = 1; i <= 6; i++){

                for(j = 1; j <= 6; j++){

                    for(k = 1; k <= 6; k++){
                        printf("%d * %d * %d\n", i, j, k);
                    }
                }
                printf("\n");
            }

            //resolucao letra c
            for(i = 1; i <= 6; i++){

                for(j = i; j <= 6; j++){

                    for(k = j; k <= 6; k++){
                        printf("%d * %d * %d\n", i, j, k);
                    }
                }
                printf("\n");
            }

return 0;
}
