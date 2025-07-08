#include <stdio.h>
int change(int*);
void main() {
	int a = 10;
	int* p = &a;
	printf("함수 호출 이전의 a: %d \n", a);
	change(p);
	printf("함수 호출 이후의 a: %d \n", a);
}


int change(int* k) {
	*k = *k + *k;
}