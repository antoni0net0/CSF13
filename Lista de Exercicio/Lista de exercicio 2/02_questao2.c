#include <stdio.h>
#include <math.h>

int main ()
{

        int raio;
        float formula;
        printf("digite o raio: ");
        scanf("%d", &raio);

        formula = (4.0/3.0) * M_PI * raio * raio * raio;

        printf("o valor do volume da esfera eh: ");
        printf("%f", formula);

return 0;
}
