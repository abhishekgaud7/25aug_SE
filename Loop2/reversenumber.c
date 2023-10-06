#include <stdio.h>
main() 
{
 int n, reverse = 0, remainder;

  printf("Enter the number:");
  scanf("%d", &n);

  while (n != 0) {
    remainder = n % 10;      // 45%10=5;
    reverse = reverse * 10 + remainder;  // 0*10+5=5;
    n =n / 10; //45/10;
  }

  printf("Reversed number = %d", reverse);
}
