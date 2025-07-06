#include <stdio.h>
#pragma warning(disable: 4996)
void main()
{
	int i, n, c = 'A';
	while (1) {
		printf("횟수는 ? ");
		scanf("%d", &n);
		for(i = 1; i <= n; i++) {
			printf("%c", c);
			if (c == 'Q') {
				goto end;
			}
			c++;
		}
		printf("\n\n");
	}
end:
	printf("\n\n프로그램을 종료합니다.\n");
}