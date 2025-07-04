#include <stdio.h>
int a = 100;
void func(void) {
	int a = 200;
	printf("func함수 안의 a = %d\n", a);
}

int main() {
	printf("main함수 안의 a = %d\n", a);
	func();
}