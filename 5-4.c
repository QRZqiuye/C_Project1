#include <stdio.h>
int sum(int a, int b);
void main() {
	printf("sum = %d\n", sum(10, 20));
}

int sum(int a, int b) {
	return a + b;
}