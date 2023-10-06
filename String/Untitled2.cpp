#include <stdio.h>
void reverse(char *str)
{
if (*str)
{
	reverse(str + 1);
	printf("%c", *str);
}
}
main()
{
char a[] = "Abhi";
reverse(a);
}

