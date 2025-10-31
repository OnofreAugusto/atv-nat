#include <stdio.h>
int main()
{
    int salario;
    char nome[50];
    printf("Insira o Seu Nome");
    scanf("%s", &nome);
    printf("Agora Insira o seu Salário ");
    scanf("%d", &salario);
    printf("O funcionário %c tem um salário de R$%d em Junho", nome, salario);
    return 0;
}
