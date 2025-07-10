#include <stdio.h>
#include <stdlib.h>  // for exit
#pragma warning(disable:4996)

int file_copy(const char* oldname, const char* newname);

int main() {
	char source[80], destination[80];
	printf("\nEnter source file: ");
	scanf("%79s", source);
	printf("Enter destination file: ");
	scanf("%79s", destination);

	if (file_copy(source, destination) == 0)
		puts("\nCopy operation successful");
	else
		fprintf(stderr, "\nError during copy operation");

	return 0;
}

int file_copy(const char* oldname, const char* newname) {
	FILE* fold = fopen(oldname, "rb");
	if (fold == NULL) {
		perror("Error opening source file");
		return -1;
	}

	FILE* fnew = fopen(newname, "wb");
	if (fnew == NULL) {
		perror("Error creating destination file");
		fclose(fold);
		return -1;
	}

	int c;
	while ((c = fgetc(fold)) != EOF) {
		fputc(c, fnew);
	}

	fclose(fold);
	fclose(fnew);
	return 0;
}
