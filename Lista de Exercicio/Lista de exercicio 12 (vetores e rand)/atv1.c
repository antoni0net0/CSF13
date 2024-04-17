#include <stdio.h>

int main()
{
    int vetor[10], i;

    for(i=0; i<10;i++)
    {
        vetor[i] = i;
        printf("%d\n", vetor[i]);
    }

    return 0;
}
