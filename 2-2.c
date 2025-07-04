#include <stdio.h>
#include <limits.h> // 정수자료형 최소값 최대값을 정의하는 헤더파일

void main()
{
	char ch1 = CHAR_MIN; // char형의 최소값
	char ch2 = CHAR_MAX; // char형의 최대값
	short sh1 = SHRT_MIN; // short형의 최소값
	short sh2 = SHRT_MAX; // short형의 최대값
	int in1 = INT_MIN; // int형의 최소값
	int in2 = INT_MAX; // int형의 최대값
	long ln1 = LONG_MIN; // long형의 최소값
	long ln2 = LONG_MAX; // long형의 최대값
	long long ll1 = LLONG_MIN; // long long형의 최소값
	long long ll2 = LLONG_MAX; // long long형의 최대값
	
	printf("char형의 최소값: %d, 최대값: %d\n", ch1, ch2);
	printf("short형의 최소값: %d, 최대값: %d\n", sh1, sh2);
	printf("int형의 최소값: %d, 최대값: %d\n", in1, in2);
	printf("long형의 최소값: %ld, 최대값: %ld\n", ln1, ln2);
	printf("long long형의 최소값: %lld, 최대값: %lld\n", ll1, ll2);
}

