#include <stdio.h>
#include <stdlib.h>
void main() {
	int* a;
	a = (int*)malloc(sizeof(int));
	if (a == NULL) {
		puts("기억공간 할당 실패!");
		exit(1);
	}
	*a = 20;
	printf("힙에 저장된 변수 a: %d \n", *a);
	free(a);
}