#include <stdio.h>
#define N 51

int main(){

            int i, j, cont = 0, numero = N, espaco = numero - 2;
            char caractere = 'A';

            for(i = N; i > 0; i -=2){

                for(j = 0; j < cont; j++)
                    printf(" ");

                printf("%c", caractere + cont);

                for(j = 0; j < espaco; j++)
                    printf(" ");

                if(espaco >= 0)
                    printf("%c", caractere + cont);

                printf("\n");

                espaco -= 2;
                cont++;

            }

return 0;
}
