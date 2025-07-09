#include <stdio.h>
struct student {
	char name[10];
	int kor;
	int math;
};

void main() {
	struct student hs[4] = { 
		{"KIM",90,95},{"LEE",85,85},{"PARK",80,80},{"CHOI",95,95} };
	struct student* p;
	p = hs;
	printf("%s %d %d \n", p->name, p->kor, p->math);
	p += 3;
	printf("%s %d %d \n", p->name, p->kor, p->math);
	p--;
	printf("%s %d %d \n", p->name, p->kor, p->math);
}