#include<stdio.h>
main()
{
	int i,j;
	int n=5;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if (j== 1 ||j==n || i==1 || i==n || i==j && i>=n/2+1){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
			}
}
