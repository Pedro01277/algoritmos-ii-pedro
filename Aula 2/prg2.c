#include <stdio.h>

int main()
{
    int N1, N2, N3;
    printf("Digite número um: ");
    scanf("%d", &N1);
    printf("Digite número dois: ");
    scanf("%d", &N2);
    printf("Digite número três: ");
    scanf("%d", &N3);
    int MR, MD, MN;
    if (N2 < N1 && N3 < N1 || N1 < N2 && N3 < N2 || N1 < N3 && N2 < N3)
    {
        MR = N1;
        MR = N2;
        MR = N3;
    }
    else if (N2 < N1 && N3 < N2 || N3 < N2 && N1 < N3 || N1 < N3 && N2 < N1)
    {
        MD = N2;
        MD = N3;
        MD = N1;
    }
    else
    {
        MN = N3;
        MN = N1;
        MN = N2;
    }
    printf("MAIOR %d", MR);
    printf("MEDIO %d", MD);
    printf("MENOR %d", MN);
}