#include <stdio.h>

int main() 
{
    int n, v = 1, mn, mr, s = 0;
    double md;
    for(v; v <= 10; v++)
    {
        printf("Digite um número:");
        scanf("%d", &n);
        if(v == 1)
        {
            mr = n;
            mn = n;
        }
        if(n > mr)
        {
            mr = n;
        }
        if(n < mn)
        {
            mn = n;
        }
        s += n;
    }
    md = s / 10;
    printf("%d Maior\n", mr);
    printf("%d Menor\n", mn);
    printf("%.2lf média\n", md);
}