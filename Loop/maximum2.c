#include<stdio.h>
main()
{
	int a,b,max;
	printf("Enter the number1:");
	scanf("%d",&a);
	printf("Enter the number2:");
	scanf("%d",&b);
	if(a>b){
		max=a;
	}else if(b>a){
		max=b;
	}
	printf("Maximum number of both two number is:%d",max);
}
