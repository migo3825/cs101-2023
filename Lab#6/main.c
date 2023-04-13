#include <stdio.h>

int multi(int i, int j)
{
    if (i<=9)
    {
        if (j<=9)
        {
            printf("%d*%d=%-2d ", i, j, i*j);
            multi(i, j+1);
        }
        else
        {
            printf("\n");
            multi(i+1, 1);
            return 0;
        }
    }
    else
    {
        return 0;
    }
}

int main()
{
    multi(1, 1);
    return 0;
}
