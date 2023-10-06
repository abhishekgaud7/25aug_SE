#include <stdio.h>
main() {
	int i,j,k;
  int n=5;
  // reversed pyramid star pattern
  for (i=0; i<n; i++) {
    // printing spaces
    for (j=0; j<i; j++) {
      printf(" ");
    }
    // printing star
    for (k=0; k<(n-i)*2-1; k++) {
      printf("*");
    }
    printf("\n");
  }
  // pyramid star pattern
  for (i=2; i<=n; i++) {
    // printing spaces
    for (j=n; j>i; j--) {
      printf(" ");
    }
    // printing star
    for (k=0; k<i*2-1; k++) {
      printf("*");
    }
    printf("\n");
  }
}

//hourglass
