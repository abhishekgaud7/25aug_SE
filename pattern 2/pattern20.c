#include<stdio.h>
main()
{
	int i,j,k,l;
	int n;
	 printf("Enter the number of rows: ");
     scanf("%d", &n);
	 for (i = 1; i <= n; i++) {
      for (j = 1; j <= i; j++){
			printf(" * ");
		}
		 for (k = n; k >= 1; k--) {
      for (l = 1; l <= i; l++){
			printf(" * ");
		
	}
	
}
printf("\n");
}
}
