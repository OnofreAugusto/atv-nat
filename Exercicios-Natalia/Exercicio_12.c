#include <stdio.h>
int main()
{
    float valor, desc;
    printf("Insira o valor do produto: ");
    scanf("%f", &valor);
    desc = valor * 0.95; // Desconta 5% e quanto mais diminuir pode aumentar a porcentagem do desconto e também pode ser feito com 0.05 mas ai teria que ter uma string que diminui o salario pelo desconto
    printf("O valor com o desconto é: %.2f", desc);

    return 0;
}