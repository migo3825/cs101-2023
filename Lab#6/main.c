#include <stdio.h>

int multi(int i, int j)
{
    if (i > 9)
    {
        return 0;
    }
    else
    {
        if (j > 9)
        {
            printf("\n");
            multi(i+1, 1);
            return 0;
        }
        else
        {
        printf("%d*%d=%-2d ", i, j, i*j);
        multi(i, j+1);
        }
    }
}

int main()
{
    multi(1, 1);
    return 0;
}
