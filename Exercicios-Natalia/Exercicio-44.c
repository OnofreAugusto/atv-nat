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

    while (valini < valfim)
    {
        printf("%d ", valini);
        valini = valini + incremento;
    }
    printf("acabou! ");

    return 0;
}
