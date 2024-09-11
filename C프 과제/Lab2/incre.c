
#include<stdio.h>

int main()
{
	int i = 5;
	int j = 0;
	int k = 0;
	printf("%d, %d, %d, %d\n", i++, ++i, i++, ++i); // 8 9 6 9 //

	i = 5;
    printf("%d, %d, %d, %d, %d\n", --i, i--, i--, i, --i); // 1 3 4 1 1 //

	i = 0;
	j = 0;
	if ((i++ != ++j) && (++i != j++))
	{
		printf("%d %d\n", i, j);
	}
}


