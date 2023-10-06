#include<stdio.h>
#include<string.h>
main()
{
	char name1[20],name2[20];
	printf("Enter your name:");
	gets(name1);
	
	if(strrev(name1)){
		printf("\nReverse=%s",name1);
		
	}else if(strcmp(name1,name2)){
		printf("\nCompare=%s",name2);
	}else{
		printf("\nIt is not a palindrome");
	}
}

