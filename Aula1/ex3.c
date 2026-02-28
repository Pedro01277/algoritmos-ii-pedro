#include <stdio.h>

int main()
{
    int N;
    int m = 0, c = 0, d = 0, u = 0;

    scanf("%d", &N);
    m = N / 1000;
    N = N - m * 1000;
    c = N / 100;
    N = N - c * 100;
    d = N / 10;
    N = N - d * 10;
    u = N / 1;
    N = N - u * 1;

    printf("Milhar = %d", m);
    printf("Centena = %d", c);
    printf("Dezena = %d", d);
    printf("unidade = %d", u);
}