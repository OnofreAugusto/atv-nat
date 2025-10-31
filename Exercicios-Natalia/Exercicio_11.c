#include <stdio.h>
int main()
{
    float A, B, C, D;
    printf("Insira o valor de A: ");
    scanf("%f", &A);
    printf("Insira o valor de B: ");
    scanf("%f", &B);
    printf("Insira o valor de C: ");
    scanf("%f", &C);
    D = (B * B) - (4 * A * C);
    printf("O valor de Delta é: %.2f", D);
    return 0;
}