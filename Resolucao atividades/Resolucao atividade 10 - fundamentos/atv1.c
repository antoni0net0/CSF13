#include <stdio.h>

int main(){

            double numero;
            int resultado;


            printf("digite um numero: ");
            scanf("%lf", &numero);

            resultado = arredonda(numero);

            printf("%d", resultado);

return 0;
}


            int arredonda(double x){

                    if(x >= 0){

                        if((x - (int) x) >= 0.5)
                            return x + 1;

                        else
                            return x;

                    }

                    else{

                        if(0 - (x - ((int) x * -1)) >= 0.5)
                            return x - 1;

                        else
                            return x;



                    }


            }
