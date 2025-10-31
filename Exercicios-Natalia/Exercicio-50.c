#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num = 0, acima = 0, parc = 0;
    srand(time(NULL));
       printf("Numero aleatorio: ");
    for (int i = 1; i <= 20; i++)
    {
        int num = rand() % 11;
     
        printf("%d ", num);
        if (num > 5)
        {
            acima++;
        }
        else if (num % 3 == 0)
        {
            parc++;
        }
    }
    printf("\nNumeros acima de 5: %d\n", acima);
    printf("Divisiveis por 3: %d", parc);

    return 0;
}