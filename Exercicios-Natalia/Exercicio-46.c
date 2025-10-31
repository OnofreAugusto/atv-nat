#include <stdio.h>
int main()
{
    int num = 6, soma = 0;
    while (num<=100)
    {
        printf("%d ", num);
        num = num + 2;
        soma = soma + num;
    }
    printf("\nResultado: %d ", soma);
    return 0;
}