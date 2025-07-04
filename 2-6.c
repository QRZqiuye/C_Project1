#include <stdio.h>
void main()
{
	enum day1 { sun, mon, tue, wed, thu, fri, sat } d1;
	enum day2 { SUN, MON, TUE, WED, THU, FRI, SAT } d2;
	d1 = mon;
	d2 = TUE;
	printf("d1에 저장된 값은 %d\n", d1);
	printf("d2에 저장된 값은 %d\n", d2);
}