#include <stdio.h>
#pragma warning(disable: 4996)
void main()
{
	int a;
	printf("Enter a number: ");
	scanf("%d", &a);
	if (a % 2 == 0)
	{
		printf("The number is %d and it is even.\n", a);
	}
	else
	{
		printf("The number is %d and it is odd.\n", a);
	}
}