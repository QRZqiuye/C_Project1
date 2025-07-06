#include <stdio.h>
#pragma warning(disable: 4996)
void main()
{
	int year, month, day;
	printf("말일을 검색하고 싶은 연도와 월을 입력하세요: ");
	scanf("%d %d", &year, &month);

	if(month >= 1 && month <= 12) {
		if(month == 2) {
			if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
				day = 29; // 윤년
				printf("%d년 %d월은 윤년이므로 %d일입니다.\n", year, month, day);
			} else {
				day = 28; // 평년
				printf("%d년 %d월은 평년이므로 %d일입니다.\n", year, month, day);
			}
		}
		else {
			if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
				day = 31; // 31일인 달
				printf("%d년 %d월은 %d일입니다.\n", year, month, day);
			} else {
				day = 30; // 30일인 달
				printf("%d년 %d월은 %d일입니다.\n", year, month, day);
			}
		}
	}
	else
		printf("잘못된 입력입니다. 1~12 사이의 월을 입력하세요.\n");
}