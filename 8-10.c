#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
void main() {
	FILE* fp;
	char name[10];
	if ((fp = fopen("sample5.dat", "rb")) == NULL) {
		puts("파일을 개방할수 없습니다.");
		exit(1);
	}
	while (1) {
		if (fread(name, 10, 1, fp) != 1)
			break;
		puts(name);
	}
	fclose(fp);
}