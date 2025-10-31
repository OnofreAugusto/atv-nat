#include<stdio.h>
int main()
{int idade;

printf("Insira a sua idade: ");
scanf("%d", &idade);

if (idade<18)
{
   printf("Você é menor de idade. ");
}
else if (idade>=18 && idade<65)
{
    printf("Você é um Adulto. ");
}
else {

    printf("Você é um Idoso. ");
}

    return 0;
}