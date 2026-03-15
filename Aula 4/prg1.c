#include <stdio.h>

int main()
{
    int nr1, nr2;
    printf("Digite dois número:");
    scanf("%d %d", &nr1, &nr2);
    if(nr1 % 2 == 0)
    {
        while(nr1 <= nr2)
        {
            printf("%d ", nr1);
            nr1 += 2;
        }
    }
    else
    {
        while(nr1 <= nr2)
        {
            printf("%d ", nr1);
            nr1 += 3;
        } 
    }
}