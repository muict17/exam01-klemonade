#include <stdio.h>

int main()
{
    int n;
    int a[100];
    scanf("%d",&n);
    int i=0;
    int tmp = n;
    while(tmp>0)
    {
        a[i]=tmp%2;
        tmp/=2;
        i++;
    }
    int mx = i;
    for (i=mx-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}