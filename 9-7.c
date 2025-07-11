#include <stdio.h>
#include <string.h>
void main() {
	char s[] = "1234567890";
	printf("memset() 실행 전 s의 데이터 : %s \n", s);
	memset(s, '*', strlen(s));
	printf("memset() 실행 후 s의 데이터 : %s \n", s);
}