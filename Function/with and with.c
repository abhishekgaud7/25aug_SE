#include<stdio.h>
int sum(int,int);
main()
{
	int a,b,result;
	printf("Enter the value of a and b:");
	scanf("%d%d",&a,&b);
	result=sum(a,b);
	printf("Sum=%d",result);
	}
int sum(int a,int b)
{
	return a+b;
}
