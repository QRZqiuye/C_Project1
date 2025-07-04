#include <stdio.h>
#define CON 1
void main() {
#if CON
	printf("\n A project!");
#else
	printf("\n B project!");
#endif
}