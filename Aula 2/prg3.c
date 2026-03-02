#include <stdio.h>

int main()
{
    double nt1, nt2, nt3, mat;
    printf("Digite suas três notas:");
    scanf("%lf %lf %lf", &nt1, &nt2, &nt3);
    mat = (nt1 + nt2 + nt3) / 3;
    printf("Sua Média Aritmética %.1lf\n", mat);
    if (mat >= 6)
    {
        printf("Está aprovado!");
    }
    else
    {
        printf("Está reprovado!");
    }
}