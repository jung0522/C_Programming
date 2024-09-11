#include <stdio.h>
#include <string.h>
void clearLineBuffered(char str[]){
    str[strlen(str)-1] = '\0';
	while(getchar() != '\n')
		{
	}

}
int main (void)
{
	char str1[10];
	char str2[10];

	printf("enter first string: ");
	fgets(str1, sizeof(str1), stdin);
	clearLineBuffered(str1);


	printf("enter second string: ");
	fgets(str2, sizeof(str2), stdin);
	clearLineBuffered(str2);
	
	if ( strcmp(str1, str2) < 0 )
		printf("%s is before %s in dictionary\n", str1, str2);

	else if ( strcmp(str1, str2) > 0 )
		printf("%s is before %s in dictionary\n", str2, str1);

	else 
		printf("%s is same %s in dictionary\n", str1, str2);


	return 0;

}
