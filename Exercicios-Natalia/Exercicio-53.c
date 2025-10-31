#include <stdio.h>
int main()
{
    int i = 0, idade, quanthomens = 0, mediageral = 0, mediahomens = 0, muieadulta = 0, somageral = 0;
    int cont_m = 0, cont_f = 0;
    char sexo[9];
    while (i < 5)
    {
        printf("E qual o seu sexo? ");
        scanf(" %s", sexo);

        if (sexo == "masculino")
        {
            printf("Qual a idade? ");
            scanf("%d", &idade);
            cont_m++;
            somageral = somageral + idade;
            quanthomens = quanthomens + idade;
        }
        if (sexo == "feminino")
        {
            cont_f++;
            printf("Qual a idade da muie? ");
            scanf("%d", &idade);
            somageral = somageral + idade;
            if (idade > 20)
            {
                muieadulta++;
            }
        }
       

        i++;
    }
    mediageral = somageral / 10;
    mediahomens = quanthomens / 10;
    printf("O total de homens cadastrados e: %d\n", cont_m);
    printf("Total de mulheres cadastradas: %d\n", cont_f);
    printf("A media geral e: %d", mediageral);
    printf("A media de idade dos homens e: %d", mediahomens);
    printf("%d mulheres tem mais de 20 anos%d", muieadulta);


    return 0;
}