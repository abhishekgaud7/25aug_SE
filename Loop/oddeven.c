#include<stdio.h>
void main()
{
	int i,num,evensum=0,oddsum=0;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(i%2==0)
		{
			evensum=evensum+i;
		}else{
			oddsum=oddsum+i;
		}
	}
	printf("\nEvensum%d",evensum);
	printf("\nOddsum%d",oddsum);
}
