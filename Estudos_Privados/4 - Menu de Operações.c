#include<stdio.h>
int main(){
int n1, n2;
char opcao;

printf("Digite dois numeros: ");
scanf("%d%d", &n1, &n2);

printf("Digite a operação matematica: ");
scanf ( " %c", &opcao);
switch (opcao)
{
case ('+'):
    
    printf(" %d\n", n1 + n2);
    break;

case ('-'):
    printf(" %d\n", n1 - n2);
    break;

case ('*'):
    printf(" %d\n", n1 * n2);
    break;

case ('/'):
    printf(" %d\n", n1 / n2);
    break;

default:printf("Insira uma opção valida! ");
    break;
}





    return 0;
}