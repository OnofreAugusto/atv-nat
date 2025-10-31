#include<stdio.h>
int main() 
{
    int n1, n2, resultado;
    printf("Insira o primeiro número");
    scanf ("%d", &n1);
    printf("Insira o segundo número");
    scanf ("%d", &n2);
    resultado = n1 + n2;
    printf ("O somatório final é%d\n", resultado);
    return 0;
}