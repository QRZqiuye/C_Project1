#include <stdio.h>
#pragma warning(disable: 4996)
void main()
{
	int a;
	printf("Enter a number: ");
	scanf("%d", &a);
	if(a>=0)
		if(a == 0)
			printf("Zero\n");
		else
			printf("Positive\n");
	else
		printf("Negative\n");
}