#include <stdio.h>
int main()
{
    float saldo, dolar;
    char nome[50];
    printf("Insira o seu nome: ");
    scanf("%s", nome);
    printf("Olá %s, Insira o seu saldo: ");
    scanf(" %f", &saldo);
    dolar = saldo / 3.45;
    printf("Você consegue comprar $%.2f", dolar);

    return 0;
}