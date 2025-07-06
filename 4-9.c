#include <stdio.h>
#pragma warning(disable: 4996)
void main()
{
	int n;
	printf("n = ?");
	scanf("%d", &n);
	printf("n %% 5 = %d\n", n % 5);
	switch (n % 5) {
	case 0:
		printf("n %% 5 == 0\n");
		break;
	case 1:
		printf("n %% 5 == 1\n");
		break;
	case 2:
		printf("n %% 5 == 2\n");
		break;
	case 3:
		printf("n %% 5 == 3\n");
		break;
	default:
		printf("n %% 5 == 4\n");
		break;
	}
}