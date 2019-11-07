#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i=1;
    while(i*i*i<=n)
    {
        if (i*i*i==n)
        {
            printf("true");
            return 0;
        }
        i++;
    }
    printf("false");
}