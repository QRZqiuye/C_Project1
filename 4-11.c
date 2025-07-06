#include <stdio.h>
#pragma warning(disable:4996)
void main()
{
	int i;
	printf("정수를 입력(1~10): ");
	scanf("%d", &i);
	if (i == 1)
		goto ONE;
	else if (i == 2)
		goto TWO;
	else
		goto EXIT;
ONE:
	printf("1입니다.\n");
	goto EXIT;
TWO:
	printf("2입니다.\n");
	goto EXIT;
EXIT:
	printf("프로그램을 종료합니다.\n");
	return 0;
}