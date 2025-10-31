#include <stdio.h>
int main()
{
    float vel, taxa, limite, excesso, multa;

    printf("Qual a velocidade do carro? ");
    scanf("%f", &vel);

    taxa = 5;
    limite = 80;
    if (vel > limite)
    {
        excesso = vel - limite;
        multa = excesso * taxa;

        printf("Você foi multado em R$%.2f. ", multa);
    }
    else
    {
        printf("Você não foi multado. ");
    }

    return 0;
}