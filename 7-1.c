#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

struct person {
	char name[10];
	int age;
	char sex;
};

void main() {
	struct person X = { "홍길동",30,'M' };
	struct person Y;
	strcpy(Y.name, "임꺽정");
	Y.age = 35;
	Y.sex = 'M';
	printf("X의 정보 : %s, %d, %c \n", X.name, X.age, X.sex);
	printf("Y의 정보 : %s, %d, %c \n", Y.name, Y.age, Y.sex);
	printf("sizeof(person.name) : %dbyte \n", sizeof(X.name));
	printf("sizeof(person.age) : %dbyte \n", sizeof(X.age));
	printf("sizeof(person.sex) : %dbyte \n", sizeof(X.sex));
	printf("sizeof(person) : %dbyte \n", sizeof(X));
}