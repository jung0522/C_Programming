/*
#include <stdio.h>
/int main() {
	FILE *src = fopen("simple.txt", "r");
	FILE* dest = fopen("dst.txt", "w");
	char str[30];
	if (src == NULL || dest == NULL) {
		puts("���� ���� ����!");
		return -1;
	}

	while (fgets(str, sizeof(str), src) != NULL)
		fputs(str, dest);
	if (feof(src) != 0)
		puts("���� ���� �Ϸ�!");
	else
		puts("���� ���� ����!");
	fclose(src);
	fclose(dest);
	return 0;
	
}
*/