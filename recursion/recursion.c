#include<stdio.h>
int recurse(int x)
{
	if(x>=1)
	{
		printf("Welcome to recursion function\n");
		recurse(x-1);
	}
}
	main()
	{
		recurse(7);
	}
