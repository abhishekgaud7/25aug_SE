#include<stdio.h>
void main()
{
	int i,n,factorial = 1;
	printf("Enter the number:");
	scanf("\n%d",&n);
	for(i=1;i<=n;i++)
	{
		factorial=factorial * i;	
		printf("\n%d",factorial);
	}
}
