#include <stdio.h>
#include <string.h>
void main() {
	char src[] = "1234567890";
	char dest[] = "abcdefghijklmnopqrstuvwxyz";
	char* stat;
	printf("memcpy() 실행 전 dest의 데이터 : %s \n", dest);
	stat = (char*)memcpy(dest, src, strlen(src));
	if (stat)
		printf("memcpy() 실행 후 dest의 데이터 : %s \n", dest);
	else
		printf("복사 실패 \n");
}