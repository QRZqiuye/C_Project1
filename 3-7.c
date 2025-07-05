#include <stdio.h>
#pragma warning(disable: 4996)
void main()
{
	char s[50];
	printf("Enter a string: ");
	gets(s);
	printf("You entered(gets): %s\n", s);
	printf("Enter another string: ");
	scanf("%s", s);
	printf("You entered(scanf): %s\n", s);
}