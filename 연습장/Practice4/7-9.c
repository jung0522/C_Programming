
#include <stdio.h>

int main()
{
	int sum = 0, num = 0;
	do
	{
		printf("정수 입력(0 to quit): ");
		scanf("%d", &num);
		sum += num;
	} while (num != 0);
	{
		printf("합계: % d\n", sum); //while만 쓰면 scanf 2번 씀 //
		return 0;
	}
}
