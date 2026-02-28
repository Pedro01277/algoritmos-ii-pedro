#include <stdio.h>

int main()
{
    double kg, a;
    printf("Digite seu peso ");
    scanf("%lf", &kg);
    printf("Digite a sua altura ");
    scanf("%lf", &a);

    double Imc = (a * a) / kg;
    printf("Seu indice de massa corporal %lf", Imc);
}