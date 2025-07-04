#include <stdio.h>
void main()
{
	char ch;
	int in;
	ch = in = 'A';
	printf("ch = %d\n", ch);
	printf("in = %d\n", in);
	printf("-------------\n");
	ch = in = 100;
	printf("ch = %d\n", ch);
	printf("in = %d\n", in);
}