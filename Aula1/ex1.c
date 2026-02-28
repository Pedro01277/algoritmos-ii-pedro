#include <stdio.h>

int main()
{
    int C;
    printf("Digite uma temperatura em Celcius: ");
    scanf("%d", &C);

    double F = (C * 1.8) + 32;
    printf("Temperatura em Fahrenheit %lf", F);
}
