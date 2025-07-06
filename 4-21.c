#include <stdio.h>
#include <math.h>
#pragma warning(disable: 4996)
void main()
{
	int num = 1;
	while(num != 0)
	{
		printf("num = ?(0 : 종료) : ");
		scanf("%d", &num);
		if (num < 0) {
			printf("음수는 입력할 수 없습니다.\n");
			continue;
		}
		printf("Suare root of %d = %f\n", num, sqrt(num));
	}
	printf("프로그램을 종료합니다.\n");
}