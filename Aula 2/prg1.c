#include <stdio.h>

int main()
{
    int N;
    printf("Digite um número: ");
    scanf("%d", &N);
    int R = N % 2;
    if (R == 0)
    {
        printf("Número par");
    }
    else
    {
        printf("Número impar");
    }
}