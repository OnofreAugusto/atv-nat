#include <stdio.h>
int main()
{
    int idade, i = 1, soma = 0, maioridade = 0, maior18 = 0, abaixocinco = 0, media = 0;
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
    media = soma / 10;
    printf("A média de idade do grupo é: %d\n", media);
    printf("Pessoas com mais de 18 anos: %d\n", maior18);
    printf("No grupo %d Pessoas tem menos de 5 anos \n", abaixocinco);
    printf("A maior idade apresentada é: %d\n", maioridade);
    return 0;
}