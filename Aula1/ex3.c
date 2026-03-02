#include <stdio.h>

int main()
{
    int numero;
    int u, d, c, m;
    printf("Digite um numero inteiro ate 4 digitos: ");
    scanf("%d", &numero);

    u = numero % 10;
    d = (numero / 10) % 10;
    c = (numero / 100) % 10;
    m = (numero / 1000) % 10;

    printf("unidade = %d\n", u);
     printf("dezena = %d\n", d);
      printf("centena = %d\n", c);
       printf("milhar= %d\n", m);
}