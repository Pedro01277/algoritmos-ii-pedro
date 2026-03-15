#include <stdio.h>

int main() {
    int n, i, p = 1;
    printf("Digite um numero: ");
    scanf("%d", &n);
    for(i = 2; i < n; i++) 
    {
        if(n % i == 0) 
        {
            p = 0;
        }
    }
    if(p)
        printf("Primo\n");
    else
        printf("Não é primo\n");

    return 0;
}