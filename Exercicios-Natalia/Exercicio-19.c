#include <stdio.h>
int main()
{
    char nome[50];
    float n1, n2, media;
    printf("Qual o seu Nome? ");
    scanf("%49s", nome);
    printf("Insira a Primeira Nota: ");
    scanf("%.2f", &n1);
    printf("Insira a Segunda Nota: ");
    scanf("%.2f", &n2);
    media = (n1 + n2)/ 2;

    if (media >= 7.0)
    {
        printf("Você teve um bom aproveitamento! E foi de: %.2f ");
    }
    else
        printf("Você não obteve um bom aproveitamento %s... ", nome);

    return 0;
}