#include <stdio.h>

int main(){
	FILE *src = fopen("simple.txt", "r"); 
	FILE *dest = fopen("test.txt", "w");
	char str[30];

	if (src == NULL || dest == NULL)
	{
		puts("파일 오픈 실패!");
		return -1;

	}
	while(fgets(str, sizeof(str), src) != NULL) 
		 fputs(str, dest);

	if (feof(src) != 0)
		 puts("파일 복사 완료");
    else
		 puts("파일 복사 실패");

	fclose(src);
	fclose(dest);
	return 0;
}

