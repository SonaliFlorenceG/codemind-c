#include<stdio.h>
int main()
{
    int n,s=0,i;
    float avg;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    avg=s*1.0/n;
    printf("%.2f",avg);
   
} 