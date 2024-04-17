/*============================================================================*/
/* CSF13 - 2023-1 - TRABALHO 1                                                */
/*----------------------------------------------------------------------------*/
/* Bogdan T. Nassu - btnassu@utfpr.edu.br                                     */
/* Leyza E. B. Dorini - leyza@utfpr.edu.br                                    */
/*============================================================================*/
/* Reduzindo a profundidade de bits de imagens (codificando). */
/*============================================================================*/

#include "trabalho1.h"

/*============================================================================*/

#define ARQUIVO_IMG "img\\teste1.bmp" /* Imagem para teste. */
#define ARQUIVO_RBD "img\\teste_menegassi_ultimo.rbd" /* Sa�da codificada. */
#define BPP 1 /* Precisa ser 1, 2 ou 4. */

/*============================================================================*/

int main ()
{
    criaStreamsCod (ARQUIVO_IMG, ARQUIVO_RBD);
    codificaStreamImagem (BPP);
    destroiStreams ();

    return (0);
}

/*============================================================================*/

