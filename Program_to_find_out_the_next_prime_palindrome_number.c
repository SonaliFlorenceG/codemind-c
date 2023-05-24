#include <stdio.h>
int is_prime(int n)
{
	int i,fc=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			fc++;
		}
	}
	if(fc==2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
	int reverse(int n)
{
	int rev=0,r;
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	return rev;
}
int is_palindrome(int n)
{
	if(n==reverse(n))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	n++;
	while(1)
	{
		if(is_prime(n)==1&&is_palindrome(n)==1)
		{
			break;
		}
		else
		{
			n++;
		}
	}
	printf("%d",n);
}
