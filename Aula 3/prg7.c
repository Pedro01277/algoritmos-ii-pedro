#include <stdio.h>

int main()
{
    int vls;
    printf("Digite o valor do saque:");
    scanf("%d", &vls);
    int nota100 = vls / 100;
    int r = vls % 100;
    int nota50 = r / 50;
     r = r % 50;
    int nota10 = r / 10;
     r = r % 10;
    int nota5 = r / 5;
     r = r % 5;
    int nota2 = r / 2;
     r = r % 2;

    printf("Notas de 100 %d\n", nota100);
    printf("Notas de 50 %d\n", nota50);
    printf("Notas de 10 %d\n", nota10);
    printf("Notas de 5 %d\n", nota5);
    printf("Notas de 2 %d\n", nota2);
}