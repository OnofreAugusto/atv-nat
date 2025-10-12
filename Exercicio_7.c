#include <stdio.h>
int main()
{
    float num, dobro, tp;
    printf ("Insira o Numero: ");
    scanf ("%f", &num);
    dobro = num*2;
    tp = num/3;
    printf("O dobro do numero inserido é %.2f, e a sua terça parte é %.2f. ", dobro, tp);

        return 0;
}