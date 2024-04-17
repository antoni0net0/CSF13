/*
    Autor: Antonio Galvao Martins Neto
    Numero de Matricula: 2557908
    BSI - 2023/1
*/

#include "trabalho1.h"
#include "imagem.h"
#include <stdlib.h>     // pro desafio
#include <time.h>       // pro desafio
#define BITS 8



    //CODIFICA - FUNCAO 1

void codificaStreamImagem (int n_bits){

    unsigned int pixel;
    unsigned char byte;
    int i, moveBits = (BITS - n_bits);

    if(n_bits == 1||n_bits == 2 || n_bits == 4){

        pixel = pegaProximoPixel();               // chamo a funcao antes do laco pra ele funcionar direito
        while(pixel != 0xFFFFFFFF)                // laço roda enquanto o resultado de pixel for diferente de 0xFFFFFFFF
        {
          byte = 0;                               // como o parametro de enviaByteRBD eh um unsigned char eh necessário declarar a variavel como 0 pra nao atrapalhar na hora da soma

            for(i = 0; i < (BITS / n_bits); i++)  // BITS = 8 | moveBits = 8 - n_bits | byte = '0'
            {
                pixel = pixel >> moveBits;        // pixel move pra direita moveBits vezes pra zerar os valores menos significativos de pixel
                pixel = pixel << moveBits;        // pixel volta pra esquerda moveBits vezes pro numero voltar ao valor do comeco, mas sem os bits menos significativos (eles foram trocados pro 0)
                pixel = pixel >> (n_bits * i);    // pixel move n_bits * i pra direita pros bits nao se acumularem so nos primeiros bits do byte que sera gerado
                byte = byte | pixel;              // ocorre a soma da variavel byte com pixel com o |
                pixel = pegaProximoPixel();       // a funcao pegaProximoPixel eh chamado de novo e eh igualada a pixel
            }

            enviaByteRBD(byte);                   // a funcao envia byte comprimido

        }
        }
}




    //DECODIFICA - FUNCAO 2

void decodificaStreamRBD(int n_bits, int preenche)
{
    unsigned int proximoByte;
    unsigned char bit_auxiliar, bits_desafio;
    int i, move_bits = (BITS - n_bits), move_bits_auxiliar = move_bits, j;


    srand (time (NULL));                                        //inicializo a funcao rand com a biblioteca time pra ela ficar realmente aleatoria
    proximoByte = pegaProximoByteRBD();                         //chama a funcao antes do laco para ele poder rodar

    while(proximoByte != 0xFFFFFFFF)                            //laco roda enquanto o valor definido de parada nao for atingido
    {

        for(i = (BITS / n_bits); i > 0; i--)
        {
            bit_auxiliar = proximoByte;                         //uso uma variavel auxiliar para nao "sujar" a variavel que cha
            bit_auxiliar = bit_auxiliar >> move_bits_auxiliar;  //movo os bits pra ficar somente com os n_bits numeros significativos
            bit_auxiliar = bit_auxiliar << move_bits;           //traco de volta pra posicao correta pros bits serem enviados

            if(preenche)                                        //verifica se a flag preenche eh verdadeira
            {
                bits_desafio = rand();                          //chamo a funcao rand pros bits que antes seriam iguais a 0 terem valores realmente aleatorios
                bits_desafio = bits_desafio >> n_bits;          //jogo n_bits vezes pro lado pra nao colocar um numero aleatorio no lugar dos bits que eu separei 4 linhas atras
                bit_auxiliar = bit_auxiliar | bits_desafio;     //somo o numero que eu criei com os bits que eu separei antes
            }
            enviaPixel (bit_auxiliar);                          //envio a soma dos bits ou os bits separados, depende se a flag eh verdadeira ou nao
            move_bits_auxiliar -= n_bits;                       //diminuo o valor da variavel auxiliar em n_bits vezes pra separacao dos bits ocorrer corretamente
        }

        move_bits_auxiliar = move_bits;                         //reatribuo o valor da variavel auxiliar pra nao ter erro na hora que o programa rodar pela segunda vez
        proximoByte = pegaProximoByteRBD();                     //chamo proximo byte pra fazer as operacoes novamente ou encerrar o programa se ele for igual o valor de parada

    }

}




