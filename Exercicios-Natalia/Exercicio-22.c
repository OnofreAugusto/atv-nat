#include <stdio.h>
int main()
{
    int ano, idade;
    printf("Insira o ano em que você nasceu: ");
    scanf("%d", &ano);
    idade = 2025 - ano;
    if (idade < 18)
    {
        printf("Você irá se alistar em: %d\n", idade = 18 - idade);
    }
    else if (idade > 18)

    {
        printf("Já se passaram %d anos ", idade = idade - 18);
    }
    else
    {

        printf("Você está no ano de alistamento. ");
    }

    return 0;
}