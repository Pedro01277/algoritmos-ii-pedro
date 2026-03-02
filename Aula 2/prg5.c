#include <stdio.h>

int main()
{
    double nt1, nt2, nt3, mat, ntex, mdt;
    printf("Digite três notas:");
    scanf("%lf %lf %lf", &nt1, &nt2, &nt3);
    mat = (nt1 + nt2 + nt3) / 3;
    if (mat > 7)
    {
        printf("Aluno Aprovado!");
    }
    else
    {
        printf("Aluno em recuperação\n");
    }
    printf("Informe a nota que tiro no exame de recuperação:");
    scanf("%lf", &ntex);
    mdt = (mat + ntex) / 2;
    if(mdt >= 6)
    {
        printf("Aluno está aprovado!");
    }
    else
    {
        printf("Aluno está reprovado.");
    }
}