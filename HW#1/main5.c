#include <stdio.h>

int main()
{
    char a[]="-9 8 7 6 5 -4 3 -2 1";
    int i=4;
    int b=0, c=0, tmp=0, sign=1, end=0;
    int length=(unsigned long)sizeof(a)-1;
    char arr[length/2];
    
    for (b; b<=length; b++)
    {
        if (a[b]=='-')
        {
            sign=-1;
        }
        else if (a[b]>='0'&&a[b]<='9')
        {
            tmp=(a[b]-'0');
        }
        else
        {
            arr[end]=sign*tmp;
            end+=1;
            tmp=0;
            sign=1;
        }
    }
    
    for (c=0; c<=end-2; c++)
    {
        for (b=c+1; b<=end-1; b++)
        {
            if (arr[c]<arr[b])
            {
                tmp=arr[b];
                arr[b]=arr[c];
                arr[c]=tmp;
            }
        }
    }
    
    printf("%d", arr[i-1]);
    
    return 0;
    
}
