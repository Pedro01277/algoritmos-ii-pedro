#include <stdio.h>

int main()
{
    double chico = 1.70, juca = 1.10;
    int a = 0;
    while(juca <= chico)
    {
        chico += 0.02;
        juca += 0.03;
        a++;
    }
    printf("Os anos necessarios %d para que a altura fique igual", a);
}