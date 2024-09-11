#include<stdio.h>
int main(void) {
	int num1 = 9, num2 = 13;
	printf("%o %#o\n", num1, num1); // %#o(8) 는 0이 붙여지고 %#x(16) 0x가 붙여짐 //
	printf("%x %#x\n", num2, num2);

	printf("\n");
	printf("%-8s %14s %5s\n", "이 름", "전공학과", "학년");
	printf("%-8s %14s %5s\n", "김동수", "전자공학", "3");
	printf("%-8s %14s %5s\n", "이을수", "컴퓨터공학", "3");
	printf("%-8s %14s %5s\n", "한선영", "미술교육학", "4");
	return 0;
}