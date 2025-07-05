#include <stdio.h>
#pragma warning(disable:4996)
void main()
{
	int a;
	long long int b;
	float c;
	char ch;
	char s[20];
	printf("정수와 longlong 정수를 입력하세요: ");
	scanf("%d %lld", &a, &b);
	printf("실수를 입력하세요: ");
	scanf("%f", &c);
	printf("c =%10.4f, c(지수) = %e \n", c, c);
	printf("문자 하나를 입력하세요: ");
	scanf(" %c", &ch);
	printf("문자열을 입력하세요: ");
	scanf("%s", s);
	printf("s[] = %s\n", s);
}