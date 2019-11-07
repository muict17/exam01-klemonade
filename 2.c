#include <stdio.h>

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
    printf("%d\n",i);
    int mx=i;
    int b[20];
    for (i=0;i<mx;i++)
    {
        if (a[i]==0)
        {
            b[i]=1;
        }
        else
        {
            b[i]=0;
        }
    }
    b[0]+=1;
    int cnt = 0;
    for (i=0;i<mx+1;i++)
    {
        if (b[i]==2)
        {
            if (i+1==mx)
            {
                b[mx]=1;
                cnt = 1;
                b[i]=0;
            }
            else 
            {
                b[i+1]++;
                b[i]=0;
            }
        }
    }
    if (cnt == 1)
    {
        for (i=mx;i>=0;i--)
        {
            printf("%d",b[i]);
        }
    }
    else 
    {
        for (i=mx-1;i>=0;i--)
        {
            printf("%d",b[i]);
        }
    }
    
}