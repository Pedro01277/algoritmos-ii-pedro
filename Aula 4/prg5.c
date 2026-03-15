#include <stdio.h>

int main() 
{
    int n, i, s = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);
    for(i = 1; i < n; i++) 
    {
        if(n % i == 0) 
        {
            s += i;
        }
    }
    if(s == n)
    {
        printf("Numero perfeito");
    }
    else
    {
        printf("Nao e perfeito");
    }
    return 0;
}