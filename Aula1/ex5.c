#include <stdio.h>

int main()
{
    int tpista = 4500;
    int voltas = 18;
    int pedidos = 18;
    float consumo = 5;
    float dmetros = tpista * voltas;
    float dkm = dmetros / 1000;
    float cmt = dkm / consumo;
    float cmpp = cmt / pedidos;
    printf("O número minimo de litros necessários para a primeira volta %.2f", cmpp);
}