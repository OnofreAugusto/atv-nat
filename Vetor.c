#include <stdio.h>
int main()
{
    int valor1[3], valor2[3], soma[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Digite o primeiro valor %d ", i);
        scanf("%d", &valor1[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Digite o segundo valor %d ", i);
        scanf("%d", &valor2[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        soma[i] = valor1[i] + valor2[i];
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Soma[%d] = %d\n", i, soma[i]);
    }
       

    return 0;
}