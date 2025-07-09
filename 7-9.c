#include <stdio.h>
#pragma warning(disable:4996)
union money {
	int kor;
	float us;
};

void main() {
	float er;
	union money m;
	printf("교환하고 싶은 금액: ");
	scanf("%d", &m.kor);
	printf("환율:");
	scanf("%f", &er);
	printf("입력한 원화는 %d이고 ", m.kor);
	m.us = m.kor / er;
	printf("교환한 달러는 %8.3f달러입니다. \n", m.us);
}