#include <stdio.h>
#define IN "원의 반지름은 100입니다.\n"
#define Pi 3.14159265
#define AREA(r) (Pi * (r) * (r))
#define OUT printf("원의 넓이는 %f입니다.\n", AREA(100))
void main(void) {
	printf(IN);
	OUT;
}