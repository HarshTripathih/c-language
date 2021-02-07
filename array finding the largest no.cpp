#include<stdio.h>
int main()
{
int n,i,key,temp,pass;
printf("enter the size of array\n");
scanf("%d",&n);
int a[n];
printf("\nenter the values in the array\n");
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
	{
		printf(" %d ",a[i]);
		
	}
	for(pass=1;pass<a[i];pass++)
	{
		for(i=0;i<10-1;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
	printf("\n \ndata items is in accending ordeer\n");
	for(i=0;i<10;i++)
	{
		printf(" %d ",a[i]);
	}
}
