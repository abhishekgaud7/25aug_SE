#include<stdio.h>
void main()
{
	int ndays;
	printf("Enter the ndays:");
	scanf("%d",&ndays);
	switch(ndays){
		case 1:
			printf("31 days");
			break;
		case 2:
			printf("28 and 29 days");
			break;
		case 3:
			printf("31 days");
			break;
		case 4:
			printf("30 days");
			break;
		case 5:
			printf("31 days");
			break;
		case 6:
			printf("30 days");
			break;
		case 7:
			printf("31 days");
			break;
		case 8:
			printf("31 days");
			break;
		case 9:
			printf("30 days");
			break;
		
		case 10:
			printf("31 day");
			break;
		case 11:
			printf("30 days");
			break;
		case 12:
			printf("31 days");
			break;
			
			default:
			printf("Invalid months");												
	}
}

