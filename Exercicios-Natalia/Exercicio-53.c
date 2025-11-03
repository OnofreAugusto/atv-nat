#include <stdio.h>
int main()
{
    int i = 0, idade, quanthomens = 0, mediageral = 0, mediahomens = 0, muieadulta = 0, somageral = 0;
    int cont_m = 0, cont_f = 0;
    char sexo;
    while (i < 5)
    {
        printf("E qual o seu sexo? ");
        scanf(" %c", &sexo);

        printf("Qual a idade? ");
        scanf("%d", &idade);

        if (sexo == 'm')
        {
            cont_m++;                          // Conta o numero de homens
            quanthomens = quanthomens + idade; // Recebe o total de idade dos homens para tirar a media
        }

        if (sexo == 'f')
        {
            cont_f++; // Conta o numero de mulheres

            if (idade > 20)
            {
                muieadulta++;
            }
        }
        somageral = somageral + idade;
        i++;
    }
    mediageral = somageral / 5;
    if (cont_m > 0)
    {
        mediahomens = quanthomens / cont_m; // dividiu pela variavel que conta os homens para que a divisão ocorra com o numero exato de homens
    }

    printf("O total de homens cadastrados e: %d\n", cont_m);
    printf("Total de mulheres cadastradas: %d\n", cont_f);
    printf("A media geral e: %d\n", mediageral);
    printf("A media de idade dos homens e: %d\n", mediahomens);
    printf(" %d mulheres tem mais de 20 anos", muieadulta);

    return 0;
}