#include <stdio.h>
main()
{
    int i, n, sum=0;
    printf("Enter upper limit: ");
    scanf("%d", &n);
    for(i=1; i<=n; i=i+2)
    {
        sum =sum+i;
    }

    printf("Sum of odd numbers = %d", sum);
}

