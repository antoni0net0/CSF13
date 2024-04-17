#include <stdio.h>

int ehProgressaoAritmetica (int n1, int n2, int n3, int n4)
{
    int razao = n2 - n1;
    if(razao == n4 - n3 && razao == n3 - n2)
        return razao;
    else
        return 0;

}

int main()
{
    int n1, n2, n3, n4, resultado;
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    resultado = ehProgressaoAritmetica(n1, n2, n3, n4);
    printf("%d", resultado);
    return 0;
}
