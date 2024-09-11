/*
#include <stdio.h>

int main(){
	char name[10];
	char gen;
	int age;
	FILE *fp = fopen("friend.txt", "w");
   
	for (int i = 0; i < 3; i++) {
		printf("이름 성별 나이 순 입력: ");
        scanf("%s %c %d", name, &gen, &age);
		fflush(stdin);
		// getchar();
        fprintf(fp,"%s %c %d\n", name, gen, age);
        }
	fclose(fp);
	return 0;
}
*/
