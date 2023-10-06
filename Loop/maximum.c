#include <stdio.h>
void main()
{
    int a, b, c, max;
    
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a,&b,&c);


    if((a > b) && (a > c))//((	19>18 && 19>17))
    {
        max = a;
    }
    else if((b > a) && (b >c)){
    
        max = b;
    }
    else if((c > a) && (c > b))
    {
        max = c;
    }
    printf("Maximum among all three numbers = %d", max);
}
