#include <stdio.h>

int main()
{
    double n1, n2, r;
    printf("Digite dois números:");
    scanf("%lf %lf", &n1, &n2);
    char operacao;
    printf("Escolha a operação: + - * /");
    scanf(" %c", &operacao);
    switch (operacao)
    {
    case '+':
        r = n1 + n2;
        break;

    case '-':
        r = n1 - n2;
        break;

    case '*':
        r = n1 * n2;
        break;

    case '/':
        r = n1 / n2;
        break;
    }
    printf("RESULTADO:%.2lf\n", r);
}