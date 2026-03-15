#include <stdio.h>

int main()
{
    int nr, n, s;
    for(nr = 1; nr <= 1000; nr++)
    {
        s = 0;
        for(n = 1; n < nr; n++)
        {
            if(nr % n == 0)
            {
                s += n;
            }
        }
        if (s == nr)
        {
            printf("%d um numero perfeito\n", nr);
        }
    }
}