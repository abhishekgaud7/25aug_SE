#include<stdio.h>
void main()
{
	char ch;
	printf("Enter the character:");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
		printf("vowel");
	}else
	{
		printf("Consotant");
	}
	
}
