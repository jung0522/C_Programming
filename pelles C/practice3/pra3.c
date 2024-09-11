/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[100];
    char str2[10];

	while(1)
		{
		fgets(str1, sizeof(str1), stdin);
		
		if(strcmp(str1, "x\n") == 0)
			break;

        while(getchar() != '\n')  
			{
		}
		printf("%d, %s", sizeof(str1), str1);
		strncpy(str2, str1, sizeof(str2));
		str2[strlen(str1)-1] = 0;
		puts(str2);
	
		

		
	}
    return 0;
}
*/

