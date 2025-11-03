#include <stdio.h>
int main()
{

    int i = 0, maisdenoventakg = 0, abaixopadrao = 0, altopesado = 0;
    float alt = 0, peso = 0, alturamedia = 0;

    while (i < 3)
    {
        printf("Insira o peso: ");
        scanf("%f", &peso);

        printf("Insira a sua altura: ");
        scanf("%f", &alt);

        alturamedia = alturamedia + alt; // Captura a altura digitada por todos os membros.
        if (peso > 90)
        {
            maisdenoventakg++;
        }
        if (peso < 50 && alt < 1.60)
        {
            abaixopadrao++;
        }
        if (alt > 1.90 && peso > 100)
        {
            altopesado++;
        }

        i++;
    }
    alturamedia = alturamedia / 3;
    printf("A media de altura do grupo e: %f\n", alturamedia);
    printf("%d pessoas pesam mais de 90 kg. \n", maisdenoventakg);
    printf("%d pessoas pesam menos de 50kg e tem menos de 1.60m\n", abaixopadrao);
    printf("%d pessoas mede mais de 1.90 e pesam mais de 100kg\n", altopesado);

    return 0;
}
