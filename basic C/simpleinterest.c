#include<stdio.h>
main()
{
	float principle,rate,time;
	printf("Enter the value of principle :");
	scanf("%f",&principle);
	printf("\nEnter the value of rate :");
	scanf("%f",&rate);
	printf("\nEnter the value of time :");
	scanf("%f",&time);
	printf("\nTotal of simple interest %f",(principle*rate*time)/100);
}
