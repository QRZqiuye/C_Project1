#include <stdio.h>
void main() {
	int days = 365;
	int month = 12;
	int Table[5] = { 1,2,3,4,5 };
	printf("days의 주소는 %x \n", &days);
	printf("month의 주소는 %x \n", &month);
	printf("Table의 주소는 %x \n", &Table);
	printf("Table의 첫번째 주소는 %x \n", &Table[0]);
	printf("Table의 두번째 주소는 %x \n", &Table[1]);
}