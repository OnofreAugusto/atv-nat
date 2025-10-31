#include<stdio.h>
int main()
{int n1, n2, n3, media;
printf("Insira os numeros: ");
scanf("%d%d%d", &n1, &n2, &n3);

media = (n1 + n2 + n3) / 3;

if (media<5)
{
    printf("Reprovado. ");
}
else if (media>=5 && media<7){

    printf("Recuperação. ");
}
else {
printf("Aprovado! ");
}

    return 0;
}