#include <stdio.h>
int main()
{
    int cigarro, totalcigarros, anos, minuto, dperdido;
    printf("Quantos cigarros cê fuma por dia? ");
    scanf("%d", &cigarro);
    printf("A quantos anos você fuma? ");
    scanf("%d", &anos);
    totalcigarros = cigarro * 365 * anos;
    minuto = totalcigarros * 10;
    dperdido = minuto / 1440;
    printf("Você perdeu %d dias da sua vida", dperdido);

    return 0;
}