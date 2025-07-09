#include <stdio.h>

struct num {
	int x;
	int y;
	int sum;
	int mul;
};

void calc(struct num* number2);

void main() {
	struct num number1;
	number1.x = 10;
	number1.y = 20;
	calc(&number1);

	printf("x: %d, y: %d, sum: %d, mul: %d \n",
		number1.x, number1.y, number1.sum, number1.mul);
}

void calc(struct num* number2) {
	number2->sum = number2->x + number2->y;
	number2->mul = number2->x * number2->y;
}