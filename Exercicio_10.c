#include <stdio.h>
int main()
{
    float larg, alt, area, inc;
    printf("Insira a altura: ");
    scanf("%f", &alt);
    printf("Agora a largura: ");
    scanf("%f", &larg);
    area = larg * alt;
    inc = area / 2;
    printf("A area que será pintada é de %.2f, e será utilizado %.2f litros de tinta", area, inc);
    return 0;
}