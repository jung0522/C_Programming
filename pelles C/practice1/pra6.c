/*
#include <stdio.h>

int main(){
	FILE *src = fopen("simple.txt", "r");
	FILE *dest = fopen("test.txt", "w");
	char ch;

	if (src == NULL || dest == NULL) {
		puts("파일 오픈 실패");
		return -1;
	}

	 while(!feof(src)){       //  while((ch = fgetc(src)) != EOF)
		ch = fgetc(src);
		fputc(ch, dest);
	}
	
	// 파일의 끝인 경우 0이 아닌 값 true 반환 : (정확히 어떤 값인지 정해져있지 않다.)
	// 파일의 끝이 아닌 경우 0 false 반환

	if (feof(src) != 0)
		puts("파일 복사 완료!");
    else
		puts("파일 복사 실패!");
	fclose(src);
	fclose(dest);
	return 0;
}
*/
