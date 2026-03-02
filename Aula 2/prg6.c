#include <stdio.h>

int main()
{
    double km, l, kmf;
    printf("Digite os Quilômetros e litros:");
    scanf("%lf %lf", &km, &l);
    kmf = km / l;
    printf("Os Quilômetros feitos foram %.2lf\n", kmf);
    if (kmf < 8)
    {
        printf("É preciso trocar de carro");
    }
}