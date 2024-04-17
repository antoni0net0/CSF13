/*
Autor: Antonio Galvao Martins Neto
*/

#include<stdio.h>
#include<stdlib.h>

int* crivoDeEratostenes (int valorMax) {
    int i, j;
    int *tabela;

    tabela = (int*) malloc (sizeof(int)*valorMax);

    for(i=0; i < valorMax; i++)
        tabela[i] = 1;

    for(i=2; i < valorMax; i++) {
        for(j=i; j < valorMax; j++)
        {
            if(j*i <= valorMax)
                tabela[j*i] = 0;
        }
    }

    return tabela;
}

int main ()
{
 int valorMax , num , *crivo ;

 printf ( " Deseja verificar ate qual valor maximo? " ) ;
 scanf ( "%d" , &valorMax ) ;

 crivo = crivoDeEratostenes (valorMax);

 printf ( "\n\nPesquisa por primos entre 1 e %d ...\n " , valorMax ) ;
 printf ( "Digite -1 para sair .\n " ) ;


 scanf ( "%d" , &num ) ;
 while ( num != -1)
 {
 if( crivo [ num ])
    printf ( " Eh primo !\n " ) ;
 else
    printf ( " Nao eh primo !\n " ) ;

    scanf ( "%d" , &num ) ;
 }

 free ( crivo ) ;
 return 0;
}
