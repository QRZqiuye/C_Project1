#include <stdio.h>
void main() {
	char A[] = "hello!";
	char* p = A;
	int i;
	int size = sizeof(A);
	for (i = 0; i < size - 1; i++)
		printf("*(A + %d) : %c \n", i, *(A + i));
	for (i = 0; i < size - 1; i++)
		printf("p[%d] : %c \n", i, p[i]);
}