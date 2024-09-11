#include <stdio.h>

int main() {
//	char a = 129;
//	int b = a;
//	printf("%d, %d\n", a, b);
	int i, j;
	for (i = 2; i < 50; i++)
	{
		for (j = 2; i / j > j; j++)
		{

			if (i % j == 0)
			{
				
				break;
			}
			
		}
		if (i == j)
		{
			printf("%d ", i);
			continue;
		}
	}
}