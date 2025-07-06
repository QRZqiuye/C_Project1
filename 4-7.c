#include <stdio.h>
#pragma warning(disable: 4996)
void main()
{
	int score = 0;
	printf("Enter your score: ");
	scanf("%d", &score);
	if(score >= 90)
		printf("Your grade is A.\n");
	else if(score >= 80)
		printf("Your grade is B.\n");
	else if(score >= 70)
		printf("Your grade is C.\n");
	else if(score >= 60)
		printf("Your grade is D.\n");
	else
		printf("Your grade is F.\n");
}