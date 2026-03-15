#include <stdio.h>

int main()
{
    int n, i, f3;
    int f1 = 0, f2 = 1;
    printf("Digite um número:");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("%d ", f1);
        i = f1 + f2;
        f1 = f2;
        f2 = i;
    }
}