#include <stdio.h>
#pragma warning(disable: 4996)
void main()
{
	int i = 1, n;
	int sum = 0;
	printf("Enter a number: ");
	scanf("%d", &n);
	do {
		sum = sum + i;
		i++;
	} while (i <= n);
	printf("i = %d\n", i);
	printf("Sum = %d\n", sum);
}