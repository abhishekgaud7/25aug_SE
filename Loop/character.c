#include<stdio.h>
void main()
{
	int ch;
	printf("Enter the character:");
	scanf("%d",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
		printf("Vowel");
	}else if(ch==1&&ch==10000){
		printf("Digit");
	}else{
		printf("Special character");
	}
}
