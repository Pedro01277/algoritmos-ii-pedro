#include <stdio.h>

int main()
{
    int dia;
    printf("Escolha um dia da semana:\n");
    printf("1 - Segunda-feira\n");
    printf("2 - Terça-feira\n");
    printf("3 - Quarta-feira\n");
    printf("4 - Quinta-feira\n");
    printf("5 - Sexta-feira\n");
    printf("6 - Sábado\n");
    printf("7 - Domingo\n");
    scanf("%d", &dia);

    switch(dia)
    {
     case 1:
     printf("Você escolheu Segunda-Feira\n");
     break;

     case 2:
     printf("Você escolheu Terça-Feira\n");
     break;

     case 3:
     printf("Você escolheu Quarta-Feira\n");
     break;

     case 4:
     printf("Você escolheu Quinta-Feira\n");
     break;

     case 5:
     printf("Você escolheu Sexta-Feira\n");
     break;

     case 6:
     printf("Você escolheu Sábado\n");
     break;

     case 7:
     printf("Você escolheu Domingo\n");
     break;

     default:
     printf("Opção inválida\n");
    }
}