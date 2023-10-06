#include<stdio.h>  
main()    
{    
	int a,b; 
	printf("Enter the value of a :");
	scanf("%d",&a);
	printf("\nEnter the value of b :");
	scanf("%d",&b); 
	printf("\nBefore swap a %d and b %d",a,b);      
	a=a+b;//a=30 (10+20)    
	b=a-b;//b=10 (30-20)    
	a=a-b;//a=20 (30-10)    
	printf("\nAfter swap a %d and b %d",a,b);  
	}
