#include <stdio.h>

int main()
{
    int MC;
    printf("Digite a quantidade de maçã:");
    scanf("%d", &MC);
    float preco_da_maca = 3.00;
    printf("O preco da maçã é R$ %.2f\n", preco_da_maca);
    double vt = MC * preco_da_maca;
    int CXM = MC / 42;
    printf("O valor total das maçãs %.2lf\n", vt);
    printf("O total de caixas %d\n", CXM);
}