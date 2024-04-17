/*============================================================================*/
/* CSF13 - 2023-1 - TRABALHO 1                                                */
/*----------------------------------------------------------------------------*/
/* Bogdan T. Nassu - btnassu@utfpr.edu.br                                     */
/* Leyza E. B. Dorini - leyza@utfpr.edu.br                                    */
/*============================================================================*/
/* Reduzindo a profundidade de bits de imagens (decodificando). */
/*============================================================================*/

#include "trabalho1.h"

/*============================================================================*/

#define ARQUIVO_RBD "img\\teste1-1.rbd" /* Entrada codificada. */
#define ARQUIVO_IMG "img\\teste_augusto_desafio1.bmp" /* Imagem de saída. */
#define BPP 1 /* Precisa ser 1, 2 ou 4. */

/*============================================================================*/

int main ()
{
    criaStreamsDecod (ARQUIVO_RBD);
    decodificaStreamRBD (BPP, 1);
    salvaStreamImagem (ARQUIVO_IMG);
    destroiStreams ();
    return (0);
}

/*============================================================================*/
