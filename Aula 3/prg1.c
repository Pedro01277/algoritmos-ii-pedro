#include <stdio.h>

int main()
{
    int ts;
    printf("Digite um tempo do evento em segundos:");
    scanf("%d", &ts);

    int tm = ts / 60;
    int th = tm / 60;

    printf("Tempo em horas %d\n", th);
    printf("Tempo em minutos %d\n", tm);
    printf("Tempo em segundos %d\n", ts);
}