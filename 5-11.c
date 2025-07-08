#include <stdio.h>
void fcn1();
int x;

void main()
{
	printf("1) x = %d \n", x);
	fcn1();
	printf("2) x = %d \n", x);
}

void fcn1() {
	x++;
}