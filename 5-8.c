#include <stdio.h>
void swap(int* a, int* b);
void main()
{
	int a = 5, b = 8;
	printf("Before swap: a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("After swap: a = %d, b = %d\n", a, b);
}

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("Inside swap: a = %d, b = %d\n", *a, *b);
}
