#include <stdio.h>

struct person {
	char name[10];
	int age;
	char sex;
};

struct department {
	char deptanme[20];
	struct person person1;
	struct person person2;
	struct person person3;
	int member;
};

void main() {
	struct department accounting = { "Accounting",
		{"hong",30,'M'},{"limgeg",35,'M'},{"huangjin",27,'F'},3 };
	printf("person1의 정보: %s, %d, %c \n",
		accounting.person1.name, accounting.person1.age, accounting.person1.sex);
	printf("person2의 정보: %s, %d, %c \n",
		accounting.person2.name, accounting.person2.age, accounting.person2.sex);
	printf("person3의 정보: %s, %d, %c \n",
		accounting.person3.name, accounting.person3.age, accounting.person3.sex);
	printf("sizeof(department) : %dbyte \n", sizeof(accounting));
}