#include <stdio.h>
int main()
{
    float salario, aumento;
    printf("Insira seu salario: ");
    scanf("%f", &salario);
    aumento = salario * 1.15;
    printf("Seu reajuste salarial é de 15%% resultando em R$ %.2f", aumento);

    return 0;
}