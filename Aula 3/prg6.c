#include <stdio.h>

int main()
{
    int ano, mes, dias;
    printf("Digite um ano e um mês:");
    scanf("%d %d", &ano, &mes);
    int anobssx =(ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0);
    if(mes == 2)
    {
      if(anobssx)
      {
        dias = 29;
      }
      else{
        dias = 28;
      }
    }
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        dias = 30;
    }
    else
    {
        dias = 31;
    }
    printf("Seus dias %d, Seu mês %d e seu ano %d", dias, mes, ano);
}