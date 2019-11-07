#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i,j;
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int tmp;
    int cnt = 0;
    for (i=0;i<n-1;i++)
    {
        for (j=0;j<n-1;j++)
        {
            if (a[j]<a[j+1])
            {
                tmp = a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
    }
    int sum = 0;
    for (i=0;i<n;i++)
    {
        if (a[i]>=0)
        {
            sum+=a[i];
            cnt++;
        }
        else if (cnt < 3)
        {
            sum+=a[i];
            cnt++;
        }
    }
    printf("%d",sum);
}