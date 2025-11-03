#include<stdio.h>
int main(){
int s1, s2, s3;

printf("Primeiro segmento ");
scanf("%d", &s1);

printf("Segundo segmento ");
scanf("%d", &s2);

printf("Terceiro segmento ");
scanf("%d", &s3);

if (s1 && s2 > s3 || s2 && s3 > s1 || s1 && s3 > s2)
{
    printf("E possivel formar um triangulo ");
}
else {
    printf("Nao e possivel formar um triangulo ");
}



    return 0;
}