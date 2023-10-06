#include<stdio.h>
#include<string.h>
main()
{
	char name[20];
	printf("Enter your name:");
	gets(name);
	printf("\nName=%s",name);
	
//	printf("\nUppercase=%s",strupr(name));
//	printf("\nLowercase=%s",strlwr(name));
//	printf("\nLength=%d",strlen(name));
	printf("\nReverse=%s",strrev(name));
}
