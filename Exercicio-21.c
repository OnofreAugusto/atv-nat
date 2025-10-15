#include <stdio.h>
int main()
{
    int ano;
    printf("Insira o ano: ");
    scanf("%d", &ano);
    if (ano / 4 && ano / 400)
    {
        printf("Ano Bissexto");
    }
    else if (ano / 100)
    {

        printf("Não é um ano Bissexto");
    } else {

        printf("Não é um ano Bissexto");

    }

    return 0;
}