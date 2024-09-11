/*
#include <stdio.h>

int main(){
	char str[30];
	int ch;
	FILE * fp = fopen("simple.txt", "w+");
	if (fp == NULL){
		puts("파일 오픈 실패");
		return -1;
    }
	fputc('A', fp);
	fputc('B', fp);
	fputs("hello\n", fp);
	fputs("world!\n", fp);

	
    fclose(fp);
    return 0;
}
*/
