#include<stdio.h>
int main()
{
	int n,r,s=0,p;
	printf("Enter the number which you want to Check\n");
	scanf("%d",&n);
	p=n;
	while(n>0)
	{
		r=n%10;
		s=s+r*r*r;
		n=n/10;
		
	}
	if(p==s)
	{
	printf("The number is Armstrong");	
	}
	else
	{
		printf("The no is not Armstrong");
	}
}
