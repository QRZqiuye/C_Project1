#include <stdio.h>
void fcn1();
void main()
{
	int i = 10;
	printf("main i = %d\n", i);
	fcn1();
	printf("main i = %d\n", i);
}

void fcn1()
{
	int i = 20;
	printf("fcn1 i = %d\n", i);
}