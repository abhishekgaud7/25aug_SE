#include<stdio.h>
main()
{
	char operator;
	printf("Enter the operator:");
	scanf("%c",&operator);
	
	switch(operator){
		case '+':
			printf("Addition");
			break;
		case '-':
			printf("Subtraction");
			break;
		case '*':
			printf("Multiply");
			break;
		case '/':
			printf("Divide");
			break;
		case '%':
			printf("Modulo");
			break;				
	}
}
