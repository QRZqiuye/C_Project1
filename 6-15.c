#include <stdio.h>
void main() {
	char* cp = "computer";

	int i = 0;
	do
		printf("*(cp + %d) : %c \n", i, *(cp + i));
	while (*(cp + i++) != '\0');
}