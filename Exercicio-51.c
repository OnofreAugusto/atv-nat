#include <stdio.h>
int main()
{
    int produto, maior = 0, menor = 0, primenor = 0;
    for (int i = 1; i <= 8; i++)
    {
        printf("Insira o valor dos produtos: ");
        scanf("%d", &produto);
        if (produto > maior)
        {
            maior = produto;
        }
        if (primenor == 0)
        {
            menor = menor + produto;
            primenor = primenor + 1;
        }
        else if (produto < menor)
        {
            menor = menor + produto;
        }
    }
    printf("O produto mais caro custa: %d e o mais barato custa %d ", maior, menor);

    return 0;
}