#include<stdio.h>
main()
{
	int num;
	printf("Enter the value of num: ");
	scanf("%d",&num);
		if(num % 2 == 0)
		printf(" %d is even",num);
	else
	printf("%d is odd",num);
}
