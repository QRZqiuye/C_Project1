#include <stdio.h>
#pragma warning(disable: 4996)
void main()
{
	int num, sum = 0;
	while (1) {
		printf("num(끝 : 0)...? ");
		scanf("%d", &num);
		if (num == 0)
			break;
		sum += num;
	}
	printf("합계 : %d\n", sum);
}