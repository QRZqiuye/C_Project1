#include <stdio.h>
#include <string.h>
#include <ctype.h>
#pragma warning(disable: 4996)
void main()
{
	int i, alp = 0, no = 0, et = 0;
	char s[20];
	printf("문자입력: ");
	scanf("%s", s);
	for(i = 0; i < strlen(s); i++) {
		if (isalpha(s[i])) {
			alp++;
		} else if (isdigit(s[i])) {
			no++;
		} else
			et++;
	}
	printf("알파벳 = %d\n", alp);
	printf("숫자 = %d\n", no);
	printf("기타문자 = %d\n", et);
}