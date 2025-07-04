#include <stdio.h>
void main() {
	int num1;
	int num2;
	num1 = 32767 + 1; //overflow안됨
	num2 = -32768 - 1; //underflow안됨
	printf("num1 = %d\n", num1); // 32768
	printf("num2 = %d\n", num2); // -32769
}