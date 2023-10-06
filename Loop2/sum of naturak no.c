#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("Enter the number:");
	scanf("\n%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum + i;	
		printf("\n%d",sum);
	}
}
