
#include <stdio.h>

typedef struct fren {
	char name[10];
	char gen;
	int age;
} Friend;
int main(void) {
	FILE* fp;
	Friend myfren1, myfren2;

	// file write //
	fp = fopen("friend.bin", "wb");
	printf("�̸�, ����, ���� �� �Է�: ");
	scanf("%s %c %d", myfren1.name, &(myfren1.gen),
		&(myfren1.age));
	fwrite((void*)&myfren1, sizeof(myfren1), 1, fp);
	fclose(fp);
	// file read //
	fp = fopen("friend.bin", "rb");
	fread((void*)&myfren2, sizeof(myfren2), 1, fp);
	printf("%s %c %d\n", myfren2.name, myfren2.gen,
		myfren2.age);
	fclose(fp);
	return 0;
}
