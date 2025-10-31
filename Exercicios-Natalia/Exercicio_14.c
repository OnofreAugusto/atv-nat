#include <stdio.h>
int main()
{
    float km, dias, total;
    printf("Quantos km foram percorridos? ");
    scanf("%f", &km);
    printf ("Quantos dias o carro foi alugado? ");
    scanf("%f", &dias);
    dias = dias * 90;
    km = km * 0.20;
    total = km + dias;
    printf("O total a pagar é: R$%2.f", total);
    return 0;
}
