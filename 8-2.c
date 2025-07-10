#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
void main() {
	FILE* fp;
	char c;
	fp = fopen("sample1.txt", "w");

	if (fp == NULL) {
		printf("파일을 개방할 수 없습니다.!");
		exit(1);
	}

	printf("문자열을 입력하시오. 입력을 끝내려면 Ctrl + z를 누르시오.");
	while ((c = getchar()) != EOF)
		putc(c, fp);
	fclose(fp);
}