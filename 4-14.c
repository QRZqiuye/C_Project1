#include <stdio.h>
void main()
{
	int i, j;
	printf("\n");
	for(i = 2; i <= 9; i++)
		printf("  -%d단- ", i);
	printf("\n");
	for( i = 1; i <= 9; i++) {
		for(j = 2; j <= 9; j++) {
			printf(" %d*%d=%2d ", j, i, j * i);
		}
		printf("\n");
	}
}