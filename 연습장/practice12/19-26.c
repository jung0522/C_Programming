/*
#include <stdio.h>

int main(void) {
	char name[30];
	char gen;
	int age;
	FILE* fp = fopen("friend.txt", "r");
		int ret;
	
		while (1) {
			ret = fscanf(fp, "%s %c %d", name, &gen, &age);
			if (ret == EOF)
				break;
			printf("%s %c %d\n", name, gen, age);
		}
	fclose(fp);
	return 0;
}
*/