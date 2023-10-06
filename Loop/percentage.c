#include<stdio.h>
void main()
{
	float English,Sanskrit,Gujarati,Science,SocialScience,Maths;
	float total,percentage;
	printf("Enter the marks of English:");
	scanf("%f",&English);
	printf("\nEnter the marks of Sanskrit:");
	scanf("%f",&Sanskrit);
	printf("\nEnter the marks of Gujarati:");
	scanf("%f",&Gujarati);
	printf("\nEnter the marks of Science:");
	scanf("%f",&Science);
	printf("\nEnter the marks of SocialScience:");
	scanf("%f",&SocialScience);
	printf("\nEnter the marks of Maths:");
	scanf("%f",&Maths);
	
total=English+Sanskrit+Gujarati+Science+SocialScience+Maths;

percentage=total/6;
	
	printf("\n");
	
	if(percentage>=90){
		printf("Distinction");
	}else if(percentage>=79){
		printf("First class");
	}else if(percentage>=69){
		printf("Second class");
	}else if(percentage>=50){
		printf("Third class");
	}else if(percentage<40){
		printf("Fail");
	}
	printf("\n");
	printf("\nThe Total marks is:  \t%.2f / 600.00", total);
    printf("\nThe Percentage is:   \t%.2f%%", percentage);
}
