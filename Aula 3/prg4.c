#include <stdio.h>

int main()
{
    int vmxa, vm;
    printf("Digite a velocidade máxima da avenida e a velocidade atual do motorista:");
    scanf("%d %d", &vmxa, &vm);
    if (vm > vmxa)
    {
        printf("Vai levar multa\n");
        int vdm = 5;
        int vlcr = vm - vmxa;
        int vltm = vdm * vlcr;
        printf("Valor total da multa %d\n", vltm);
    }
    else
    {
        printf("Não precisa de multa\n");
    }
}