#include <string.h>
#include <stdio.h>
int main()
{
    char nome[50], sexo;
    float valor, desconto;
    printf("Insira o Seu Nome: ");
    fgets(nome, 50, stdin);
   // remove o \n do final da string se estiver presente
nome[strcspn(nome, "\n")] = '\0';
    printf("Seu Sexo é? ");
    scanf(" %c", &sexo);
    printf("Qual o valor das suas compras? ");
    scanf("%f", &valor);
    if (sexo == 'M' || sexo == 'm')
        
    {
        valor = valor * 0.95;
    } else if (sexo == 'F' || sexo == 'f')
    {
        valor = valor * 0.85;
    }
    printf("Você pagará apenas R$%f! ", valor);


        return 0;
    
}