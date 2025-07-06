#include <stdio.h>
void main()
{
	float x = 0.0;
	float sum = 0.0;
	while (x < 9.9) {
		sum += x;
		x += 0.1;
	}
	printf("Sum = %f\n", sum);
}