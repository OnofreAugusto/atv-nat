#include <stdio.h>
int main()
{
    float dias, salario, hora;
    printf("Dias trabalhados: ");
    scanf("%f", &dias);

    hora = 25;
    dias = hora * 8;
    salario = dias;

    printf("O salario do funcionario atual é: %.2f", salario);

    return 0;
}