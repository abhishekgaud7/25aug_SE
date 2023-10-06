#include<stdio.h>
main()
{
	int i,j;
	int n;
	 printf("Enter the number of rows: ");
     scanf("%d", &n);
	 for (i = n; i >= 1; i--) {
      for (j = 1; j <= i; j++){
			printf(" * ");
		}
		printf("\n");
		
	}
	
}
