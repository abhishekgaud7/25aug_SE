#include<stdio.h>
int factorial()
{
	int num,i,f=1;
     printf("Enter a number:");
     scanf("%d",&num);
     for(i=1;i<=num;i++)
     {
     	f=f*i;
	 }
	 return f;
}
main()
{
	int ans;
	ans=factorial();
	printf("Factorail=%d",ans);
}
