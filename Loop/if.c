#include<stdio.h>
main()
{
   int marks;

	printf("Enter the marks:");
	scanf("%d",&marks);
	if(marks>70){ // condition
		printf("\nyou will get a watch");  //  True statement
	}else{
		printf("\nnothing");  // False statement
	}
}
