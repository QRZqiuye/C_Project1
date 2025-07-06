#include <stdio.h>
#pragma warning(disable: 4996)
void main()
{
	unsigned long int f;
	int n = 0;
	printf("계승을 구할수를 입력하세요: ");
	scanf("%d", &n);
	f = n;
	printf("%d != ", n);
	while(--n)
		f *= n;
	printf("%lu\n", f);
}