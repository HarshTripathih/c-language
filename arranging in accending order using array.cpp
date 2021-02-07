#include<stdio.h>
int main()
{
	int a[10],pass,i,temp;
	printf("Enter the numbers which you want to check \n");
	for(i=0;i<10;i++)
	{
		scanf(" %d ",&a[i]);
	}
	for(pass=1;pass<10;pass++)
	{
	for(i=0;i<10-1;i++)
		{
			if(a[i]<a[i+1])
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
