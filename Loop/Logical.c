#include<stdio.h>
main()
{
int x=5;
//printf("%d", x>3 && x<20);  Logical AND
//printf("%d", x<3 || x<10);   Logical OR
printf("%d", !(x>2 && x<12)); //Logical NOT
}
