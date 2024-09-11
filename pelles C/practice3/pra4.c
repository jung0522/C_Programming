
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char str1[] = "hi!" ;
    char str2[] = "hellohi";

	strcpy(str1, str2);
    printf("%d", sizeof(str1));
	puts(str1);

	return 0;
}


