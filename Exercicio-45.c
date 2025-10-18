#include <stdio.h>
int main()
{
    int valini, valfim, incremento;
    printf("Insira o valor inicial ");
    scanf("%d", &valini);

    printf("Digite o valor final ");
    scanf("%d", &valfim);

    printf("Digite o incremento ");
    scanf("%d", &incremento);
    if (valini < valfim)
    {
        while (valini < valfim)
        {
            printf("%d ", valini);
            valini = valini + incremento;
        }
        printf("acabou! ");
    }
    else
    {
        while (valini > valfim)
        {
            printf("%d ", valini);
            valini = valini - incremento;
        }
    }
    return 0;
}