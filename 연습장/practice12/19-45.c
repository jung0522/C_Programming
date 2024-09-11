/*
#include <stdio.h>

int ftell(FILE* stream);

int main() {
	long fpos;
	int i;

	FILE* fp = fopen("test.txt", "w");
	fputs("1234-", fp);
	fclose(fp);

	fp = fopen("test.txt", "r");
	for (i = 0; i < 4; i++) {
		printf("%c", fgetc(fp));
		fpos = ftell(fp);
		fseek(fp, -1, SEEK_END);
		printf("%c", fgetc(fp));
		fseek(fp, fpos, SEEK_SET);
	}
	fclose(fp);
	return 0;

}
*/