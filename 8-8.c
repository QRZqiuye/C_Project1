#include <stdio.h>
#pragma warning(disable:4996)
void main() {
	FILE* fp;
	fp = fopen("sample4.txt", "a");
	fputs("Cho DS \n", fp);
	fputs("Han JK \n", fp);
	fclose(fp);
}