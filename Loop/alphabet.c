#include<stdio.h>
void main()
{
	char alphabet;
	printf("Enter the alphabet:");
	scanf("%c",&alphabet);
	
	switch(alphabet){
		case 'a':
			printf("vowel");
			break;
		case 'e':
			printf("vowel");
			break;
		case 'i':
			printf("vowel");
			break;
		case 'o':
			printf("vowel");
			break;
		case 'u':
			printf("vowel");
			break;	
		default:
		printf("Consotant");				
	}
	}
