#include<stdio.h>
int main()
{
    int n,i,c=0,s=0,avg;
    scanf("%d",&n);
    int a[n];
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    avg=s/n;
     for (i=0; i<n; i++)
    {
        if (avg==a[i])
        {
            c=1;
        }
    }
     if (c==1)
        {
            printf("True");
        }
    else
    {
        printf("False");
    }
}