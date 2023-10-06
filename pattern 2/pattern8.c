#include<stdio.h>
main()
{
	int i,j;//i==row--j==coloumn
	int n=5;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==1 || i==3 || i==1 ||j==n/3){
                printf("*");
            }else
			{
                printf(" ");
            }
		}
		printf("\n");
	}
	
}
