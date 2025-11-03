#include<stdio.h>
int main (){
int n1,n2;

printf("Insira o primeiro numero inteiro: ");
scanf("%d", &n1);

printf("Insira o segundo numero inteiro: ");
scanf("%d", &n2);

if (n1>n2) {
    printf("O primeiro valor e o maior ");
}

else if (n1 == n2) {
    printf("Nao existe valor maior, os dois sao iguais ");
}

else {
    printf("O segundo valor e o maior ");
}



    return 0;
}