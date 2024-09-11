
#include <stdio.h>
#include <string.h>
int main()
{
    char str [10000001];
    int count = 0;
    fgets(str, sizeof(str), stdin);
	
	str[strlen(str)-1] = 0;


    if (strlen(str) > 0 && str[0] == ' ')     
        count--;

		for(int i = 0; i < strlen(str)-1; i++)
			{
			if ( str[i] == ' ')
			  if( ( str[i-1] != ' ' ) && ( str[i+1] != ' ' ) )
				
				   ++count;

		           
		}
	   
		printf("%d",++count);

}

