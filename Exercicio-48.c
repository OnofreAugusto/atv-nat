#include<stdio.h>
int main()
{ int num, soma = 0;
    for (int i = 1; i <= 7; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        soma = soma + num;
    }
    printf("\nO resultado é: %d", soma);




    return 0;
}