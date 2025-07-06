#include <stdio.h>
#pragma warning(disable: 4996)
void main()
{
	int a;
	printf("Enter an integer: ");
	scanf("%d", &a);
	if (a < 100)
		printf("The number is less than 100.\n");
	else
		printf("The number is 100 or greater.\n");
	printf("The number is %d.\n", a);
}