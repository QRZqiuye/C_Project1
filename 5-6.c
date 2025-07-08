#include <stdio.h>
int sum(int, int);
void test();
void main()
{
	int s;
	test();
	sum(10, 20);
	s = sum(30, 40);
	printf("sum from 30 to 40 is %d\n", s);
	printf("sum from 100 to 200 is %d\n", sum(100, 200));
}

void test()
{
	printf("test function called\n");
}

int sum(int a, int b)
{
	int i, s = 0;
	for (i = a; i <= b; i++)
		s += i;
	return s;
}