#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number :");
	scanf("%d",&num);
	if(num>0){
		
	printf("\nIt is a positive number");
	}else if(num<0)
	{
	printf("\nIt is a negative number");
	}else
	{
		printf("\nIt is a zero number");
	}
}
