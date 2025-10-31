#include <stdio.h>
int main()
{
    int num, ant, suc;
printf ("Insira o numero: ");
scanf ("%d", &num);
ant = num -1;
suc = num +1;
printf ("O antecessor é %d, e o sucessor é %d",ant, suc);
    return 0;
}