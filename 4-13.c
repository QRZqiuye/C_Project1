#include <stdio.h>
void main()
{
	int i, sum = 0;
	for (i = 1; i <= 10; ++i)
	{
		sum += i;
		printf("%d번째 실행: sum = %d\n", i, sum);
	}
	printf("1부터 %d까지의 합은 %d입니다.\n", i - 1, sum);
}