#include<stdio.h>
void sum(int a, int b)
{
	int result;
	result=a+b;
	printf("The addition of a and b is %d",result);
}
main()
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	sum(a,b);
}
