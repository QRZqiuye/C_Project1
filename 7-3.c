#include <stdio.h>
void main() {
	struct person {
		char* name;
		int age;
		char sex;
	};
	struct person X[3] = { {"hong",20,'M'},{"huang",22,'F'},{"lim",30,'M'} };
	int i, sum = 0;
	for (i = 0; i < 3; i++) {
		printf("이름 : %s 나이 : %d 성별 : %c \n", X[i].name, X[i].age, X[i].sex);
		sum = sum + X[i].age;
	}
	printf("나이 합 : %d", sum);
}