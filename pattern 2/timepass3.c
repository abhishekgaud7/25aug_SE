#include<stdio.h>
main()
{
	int i,j;
	int n=5;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if (i== 1 ||j==n/2+1|| i==n && j<=n/2+1 || j==1 && i>=n/2+1){
				printf("*");
			}if(i==1||i==n/2+1||j==1||j==n)
			}else{
				printf(" ");
			}
		}
		printf("\n");
			}
}
