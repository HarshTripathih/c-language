#include<stdio.h>
int main()
{
	int age,w,i=1,count=0;
	while(i<=5)
	{
		printf("\n Enter your age and weight \n");
		scanf("%d%d",&age,&w);
		if(age>=25 && w>=60)
		{
			printf("you are eligible age= %d  weight= %d",age,w);
			count++;
		}
		i++;
	}
	printf("\n total students are eligible =%d",count);
		
	}
