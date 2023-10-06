#include<stdio.h>
#include<string.h>
main()
{
	char name[20];
	printf("Enter your name:");
	gets(name);
	printf("\nName=%s",name);
	printf("\nLength=%d",strlen(name));

}
