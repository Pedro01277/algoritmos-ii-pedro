#include <stdio.h>

int main()
{
    double vep, np, ss;
    printf("Digite o valor do empréstimo, parcela e salário:");
    scanf("%lf %lf %lf", &vep, &np, &ss);
    double vlp = vep / np;
    if (vlp <= ss * 0.30)
    {
        printf("Empréstimo aprovado!\n");
        printf("Valor da parcela: R$ %.2lf\n", vlp);
    }
    else
    {
        printf("Empréstimo Negado\n");
        printf("Valor da parcela: R$ %.2lf\n", vlp);
    }
}