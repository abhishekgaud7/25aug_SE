#include<stdio.h>
int getfactorial(int i)
{
	if(i>1)
	{
		return i*getfactorial(i-1);
		
	}
	 
}
main()
{
	printf("Factorial=%d",getfactorial(5));
}
