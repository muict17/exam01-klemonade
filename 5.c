#include <stdio.h>

int two(int n)
{
    int a=1;
    int i;
    for (i=0;i<n;i++)
    {
        a*=2;
    }
    return a;
}

int main()
{
    int n;
    int a[20];
    scanf("%d",&n);
    int i=0;
    int tmp = n;
    while(tmp>0)
    {
        a[i]=tmp%10;
        tmp/=10;
        i++;
    }
    int b[20] = {0};
    int cnt = 0;
    int ct =0;
    int mx=i;
    for (i=0;i<mx;i++)
    {
        if (cnt!=0&&cnt%3==0)
        {
            ct++;
        }
        b[ct]+=a[i]*two(cnt%3);
        cnt++;
    }
    for (i=ct;i>=0;i--)
    {
        printf("%d",b[i]);
    }
}