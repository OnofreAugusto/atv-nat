#include <stdio.h>
int main()
{int ano, anoatual;
    printf("Qual o ano de nascimento? ");
    scanf("%d", &ano);
anoatual = 2025;
ano = anoatual - ano;

if (ano>=16)
{
    printf("Pode Votar! ");
}
else
printf ("Você não pode votar. ");




    return 0;
}