#include<stdio.h>
main()
{
	int i,j;//i==row--j==coloum
	int n=65;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf(" %c ",'A'+ j-1);
			n++;
		}
		printf("\n");
	}
	
}
