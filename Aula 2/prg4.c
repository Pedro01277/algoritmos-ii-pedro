#include <stdio.h>

int main()
{
    int ld1, ld2, ld3;
    printf("Digite os lados do seu triângulo:");
    scanf("%d %d %d", &ld1, &ld2, &ld3);
    if (ld1 == ld2 && ld2 == ld3)
    {
        printf("É um triângulo equilátero");
    }
    else if (ld1 == ld2 && ld2 != ld3 || ld1 != ld2 && ld2 == ld3)
    {
        printf("É um triângulo isósceles");
    }
    else
    {
        printf("É um triângulo escaleno");
    }
}