#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
void main() {
	int i;
	int* a;
	a = (int*)calloc(5, sizeof(int));
	for (i = 0; i < 5; i++) {
		printf("%d \n", a[i]);
	}

	free(a);
}