#include<stdio.h>
main()
{
	int n[5]={4,7,9,2,7};
	int i,sum=0;
	for(i=0;i<5;i++){
		printf("\n%d",n[i]);
		sum=sum+n[i];
	}
	printf("\nSum=%d",sum);
}
