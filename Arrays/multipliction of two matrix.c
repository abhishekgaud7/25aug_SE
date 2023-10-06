#include<stdio.h>
main()
{
	int a[3][3]={3,5,6,5,4,3,2,1,2};
	int b[3][3]={5,3,5,7,4,4,4,9,8};
	int c[3][3];
	int i,j;
	printf("------Enter the first matrix:-----\n");
		
		for(i=0;i<3;i++){
	
		for(j=0;j<3;j++){
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
	printf("------Enter the Second matrix:-----\n");
	
	for(i=0;i<3;i++){
	
		for(j=0;j<3;j++){
			printf(" %d ",b[i][j]);
		}
		printf("\n");
}
	printf("------Enter the multiplication matrix:------\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j]=a[i][j]*b[i][j];
			printf(" %d ",c[i][j]);
		}
		printf("\n");	
	}
	
}
