#include<stdio.h>
main(){
	int i,j,n;
	int k=65;
	printf("Enter the number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf(" %c ", k );
			k++;
		}
		printf("\n");
	}
}
