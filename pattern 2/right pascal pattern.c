#include <stdio.h>
main() {
  int i,j;
  int n=6;

  for (i=1; i<=n; i++) {
    for (j=0; j<i; j++) {
      printf("*");
    }
    printf("\n");
  }
  
  for (i=1; i<=n-1; i++) {
    for (j=0; j<n-i; j++) {
      printf("*");
    }
    printf("\n");
  }
}
