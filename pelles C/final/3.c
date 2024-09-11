/*
#include <stdio.h>

int main(void)
{
	
	int a[10] = {12, 23, 34, 45, 56, 65, 54, 43, 32, 11};

	for(int n = sizeof(a)/sizeof(int)-1; n != 0; n--) // 첫 번째 숫자는 9번 비교
	{
		for(int i = 0; i <= n; i++) 
		{
		if (a[i] > a[i+1])
				{
				int temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;

		        }
	    }
	}
	printf("max: %d min %d\n", a[9], a[0]);
	return 0;
}
*/
