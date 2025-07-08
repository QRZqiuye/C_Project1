#include <stdio.h>
#pragma warning(disable:4996)
int max(int x, int y);
int min(int x, int y);
void main()
{
	int i, j;
	printf("정수 2개를 입력하세요 : ");
	scanf("%d %d", &i, &j);
	printf("최대값 : %d\n", max(i, j));
	printf("최소값 : %d\n", min(i, j));
}

int max(int x, int y)
{
	return (x > y) ? x : y;
}

int min(int x, int y)
{
	return (x < y) ? x : y;
}