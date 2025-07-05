#include <stdio.h>
void main() {
	int i = 873;
	double f = 123.4567;
	char s[] = "Hello, World!";
	printf("정수형 자료의 출력 \n");
	printf("\t %04d \n \t %09d \n\n", i, i);
	printf("실수형 자료의 출력 \n");
	printf("\t %f \n \t %.2f \n \t %.4e \n\n", f, f, f);
	printf("문자열 자료의 출력 \n");
	printf("\t %.11s \n", s);
}