#include<stdio.h>
int main()
{
    int n,s,c=0,i;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&s);
     for(i=0; i<n; i++)
    {
        if(s==a[i])
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