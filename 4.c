#include <stdio.h>

void print(int mx,int b[mx][mx],int n,int m,int i,int j)
{
    if (i<m)
    {
        if (j<n)
        {
            printf("%d ",b[i][j]);
            print(mx,b,n,m,i,j+1);
        }
        else
        {
            printf("\n");
            print(mx,b,n,m,i+1,0);
        }
    }
    else
    {
        return;
    }
}

void tran(int mx,int a[mx][mx],int b[mx][mx],int n,int m,int i,int j,int chk)
{
    if (i<n)
    {
        if (j<m)
        {
            b[j][i]=a[i][j];
            tran(mx,a,b,n,m,i,j+1,0);
        }
        else
        {
            tran(mx,a,b,n,m,i+1,0,0);
        }
    }
    else
    {
        if (chk==0)
        {
            print(mx,b,n,m,0,0);
        }
        chk++;
        return;
    }
}

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int i,j;
    int mx=m;
    if (mx<n)
    {
        mx = n;
    }
    int a[mx][mx];

    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int b[mx][mx];
    tran(mx,a,b,n,m,0,0,0);
}