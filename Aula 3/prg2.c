#include <stdio.h>

int main()
{
    double vc;
    printf("Digite valor do seu combustivel:");
    scanf("%lf", &vc);

    double vdr = vc * 0.17;
    double cea = vc * 0.12;
    double icms = vc * 0.28;
    double cppc = vc * 0.07;
    double vlr = vc - vdr - cea - icms - cppc;

    printf("Valor na bomba %.2lf\n", vc);
    printf("Valor na vdr %.2lf\n", vdr);
    printf("Valor do cea %.2lf\n", cea);
    printf("Valor na icms %.2lf\n", icms);
    printf("Valor do cppc %.2lf\n", cppc);
    printf("Valor da refinaria %.2lf\n", vlr);
}