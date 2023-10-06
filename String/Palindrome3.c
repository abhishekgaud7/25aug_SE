#include<stdio.h>
#include<string.h>
main()
{
	char s1[20],s2[20];
	printf("Enter s1:");
	gets(s1);
	
	strcpy(s2,s1);
	strrev(s2);
	
	if(!strcmp(s1,s2))
	{
		printf("String is Palindrome");
		}else
		{
			printf("String is not Palindrome");
		}
}
