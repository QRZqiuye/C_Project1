#include <stdio.h>
void swap(int x, int y);
void main()
{
	int a = 3, b = 5;
	printf("Before swap: a = %d, b = %d\n", a, b);
	swap(a, b);
	printf("After swap: a = %d, b = %d\n", a, b);
}

void swap(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("Inside swap: x = %d, y = %d\n", x, y);
}