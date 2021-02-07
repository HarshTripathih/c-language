#include<stdio.h>
int main()
{int n,i,key,loc= -1;
printf("enter the size of array\n");
scanf("%d",&n);
int a[n];
printf("\nenter the values in the array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n enter the value that you want to search\n");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(a[i]==key)
{ loc = i+1;
break;
}
}
if(loc != -1)
printf("\n element found at %d location", loc);
else
printf("\n element not found\n");
}
