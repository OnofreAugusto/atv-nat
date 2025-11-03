#include<stdio.h>
int main(){
int distanciakm = 0;
float precopassagem = 0;

printf("Qual distancia voce deseja percorrer em km? ");
scanf("%d", &distanciakm);



if (distanciakm<=200)
{
    precopassagem = 0.50;
    precopassagem = precopassagem * distanciakm;
}

else if (distanciakm>200)
{
    precopassagem = 0.45;
    precopassagem = precopassagem * distanciakm;
}

printf("Voce pagara %.2f pela sua viagem", precopassagem);





    return 0;
}