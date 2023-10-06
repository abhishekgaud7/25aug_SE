#include <stdio.h>
#include <string.h>
main()
{
	char name[20];
	int l = 0;
	int h = strlen(name) - 1;
	printf("Enter the name:");
	gets(name);

	while (h > l) {
		if (name[l++] != name[h--]) {
			printf("%s is not a palindrome\n", name);
	
		}
	}
		printf("%s is a palindrome\n", name);

}

