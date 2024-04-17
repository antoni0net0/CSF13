#include <stdio.h>

int main(){

            int anoNascimento;

            printf("digite o ano em que voce nasceu: ");
            scanf("%d", &anoNascimento);

            if( (2023 - anoNascimento) < 16)
                printf("voce nao pode votar\n");

            else if((2023 - anoNascimento) >= 16 && (2023 - anoNascimento) < 18)
                printf("voce eh eleitor facultativo\n");

            else if((2023 - anoNascimento) >= 65)
                printf("voce eh eleitor facultativo\n");

            else
                printf("voce eh obrigado a votar\n");

return 0;
}
