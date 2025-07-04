#include <stdio.h>
void main() {
	short num1;
	int num2;
	num1 = 32767 + 1; // Overflow됨
	num2 = -32768 - 1; // Underflow됨
	printf("num1 = %d\n", num1); // 출력: -32768
	printf("num2 = %d\n", num2); // 출력: 32767
}