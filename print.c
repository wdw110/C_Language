#include <stdio.h>
#include <string.h>

int main()
{
	int c;
	char str[100];
	int i;

	//printf("Enter a value :");
	//c = getchar();

	//printf("\nYou entered: ");
	//putchar(c);

	printf("Enter a value :");
	gets(str);

	printf("\nYou entered: ");
	puts(str);

	printf("Enter a value :");
	scanf("%s %d", str, &i);

	printf("\nYou entered: %s %d", str, i);

	return 0;
}
