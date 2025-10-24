#include <stdio.h>
int main()
{
    int idade, i, soma, maioridade, maior18, abaixocinco;
    media = soma / 10;
    while (i <= 10)
    {
        printf("Insira a sua idade: ");
        scanf("%d", &idade);
        soma += idade;
        if (idade > 18)
        {
            maior18++;
        }
        if (idade < 5)
        {
            abaixocinco++;
        }
        if (idade > maioridade)
        {
            maioridade = idade;
        }

        i++;
    }

    return 0;
}