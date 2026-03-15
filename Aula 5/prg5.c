#include <stdio.h>

int main() 
{
    int n = 1;
    for(int x = 0; x < 4; x++) 
    {
        for(int y = 0; y < 4; y++) 
        {
            printf("%d ", n);
            n++;
        }
        printf("\n");
    }
}