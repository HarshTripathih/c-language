#include<stdio.h>
int main()
{
	int a[3][3];
	int i,j,s=0;
	printf("Enter the elements\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
		
	}
	printf("Entered elements ar\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		 
		{
			if(j==i)
			{
		
			printf(" %d",a[i][j]);
			s=s+a[i][j];
				}
		}printf("\n");
	}
	
	printf("sum=%d",s);
}
