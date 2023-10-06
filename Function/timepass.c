#include<stdio.h>
main()
{
	int English,Sanskrit,Gujarati,Science,SocialScience,Maths;
	float Total,Percentage;
	printf("Enter the marks:");
	scanf("%d%d%d%d%d",&English,&Sanskrit,&Gujarati,&Science,&SocialScience,&Maths);
	Total=English+Sanskrit+Gujarati+Science+SocialScience+Maths;
	Percentage=Total/6;
	printf("\nThe Total marks is:  \t%.2f / 600.00", Total);
    printf("\nThe Percentage is:   \t%.2f%%",Percentage);
}
