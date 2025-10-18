#include<stdio.h>
int main()
{ int num, par = 0, impar = 0;
for (int i = 1; i <= 6; i++)
{printf("Insira os numeros: ");
scanf("%d", &num);
if (num % 2 == 0)
{
    par++;
} else {
impar++;
}
}
printf("%d Pares ", par);
printf("\n%d Impares", impar);
return 0;
}