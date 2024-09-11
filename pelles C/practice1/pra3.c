/*
#include <stdio.h>

int main()
{
	FILE *fp = fopen("data.txt", "r");
	if (fp == NULL){
		puts("파일 오픈 실패!");
		return -1;
	}
	for(int i =0; i < 3; i++){
 
	    char ch = fgetc(fp);
		fputc(ch,stdout); //fputc \n 안 됨

	}
	fclose(fp);
	return 0;
}
*/
