#include<stdio.h>
main()
{
	int a=10,b=20;
	int *p,*q;
	p=&a;
	q=&b;
	
	
	printf("The vlaue of a is %d",a);
	printf("\nThe vlaue of a is %x",p);
	printf("\nThe vlaue of a is %x",&a);
	printf("\nThe vlaue of a is %p",p);
}
