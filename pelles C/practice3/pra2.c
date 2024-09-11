/*
#include <stdio.h>
#include <string.h>

void RemoveBSN(char str[])
{
	str[strlen(str)-1] = '\0'; // or 0
}
int main(void)
{
	char str[100];
	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);
	printf("길이: %d, 내용 %s \n", strlen(str), str);
    RemoveBSN(str);
	printf("길이: %d, 내용 %s \n", strlen(str), str);

}
*/
