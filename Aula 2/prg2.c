#include <stdio.h>

int main()
{
    int N1, N2, N3, N4;
    printf("Digite apenas três números:");
    scanf("%d %d %d", &N1, &N2, &N3);
    if (N1 < N2)
    {
        N4 = N1;
        N1 = N2;
        N2 = N4;
    }
    if (N1 < N3)
    {
        N4 = N1;
        N1 = N3;
        N3 = N4;
    }
    if (N2 < N3)
    {
        N4 = N2;
        N2 = N3;
        N3 = N4;
    }
    printf("Números do maior para menor %d %d %d", N1, N2, N3);
}