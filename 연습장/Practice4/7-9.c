
#include <stdio.h>

int main()
{
	int sum = 0, num = 0;
	do
	{
		printf("���� �Է�(0 to quit): ");
		scanf("%d", &num);
		sum += num;
	} while (num != 0);
	{
		printf("�հ�: % d\n", sum); //while�� ���� scanf 2�� �� //
		return 0;
	}
}
