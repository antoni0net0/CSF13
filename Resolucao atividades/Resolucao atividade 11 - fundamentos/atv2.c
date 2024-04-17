#include <stdio.h>
#define LARGURA_FAIXA 6 /* Largura da faixa de tecido, em cm. */

void pontoRolo1(){

        printf("v");

}

void pontoRolo2(){

        printf("a");

}

void moveAgulha(){

        printf(" ");

}

void rolaTecido(){

        printf("\n");

}


void main (){

    int cont = LARGURA_FAIXA;
    int i;
    /* Funciona até desligar ou o tecido acabar. */
    while (1){

        for (i = 0; i < LARGURA_FAIXA; i++){

        if (i < cont)
            pontoRolo1 ();

        else
            pontoRolo2 ();


}

if(cont >= LARGURA_FAIXA)
    cont = 0;

else
    cont++;

rolaTecido ();
}

}
