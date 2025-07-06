#include <stdio.h>
#pragma warning(disable: 4996)
void main()
{
	int a;
	printf("정수입력(1~200): ");
	scanf("%d", &a);
	if(a<100)
		printf("입력한 수는 100보다 작습니다.\n");
	printf("a = %d\n", a);
}