#include <stdio.h>
void main()
{
	int i, sum = 0;
	for(i = 1; i <= 10; i++)
	{
		sum += i;
	}
	printf("sum의 값은 %d입니다.\n", sum);
}