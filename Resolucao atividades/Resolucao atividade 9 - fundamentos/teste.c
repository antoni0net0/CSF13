#include<stdio.h>
#define N 5

int main (void)
{
    int i, j, soma, count, eh_primo;
    soma = 0;
    count = 0;
    eh_primo = 1;

    for(i = 2; count < N; i++)
    {
        for(j = 2; j <= i ; j++)
        {
            if(i == j)
            {
                continue;
            }

            if(i % j == 0)
            {
                eh_primo = 0;
                break;
            }

        }
        if(eh_primo == 1)
        {
            soma += i;
            count++;
        }
        eh_primo = 1;
    }

    printf("%i", soma);
}
