#include <stdio.h>
// �����ð��� ��� ����Լ��� �Լ��� �̿��� �Է¹��� �ڿ����� factorial ���ϴ� ���α׷��� ����ÿ� //
int sum = 1;   // ������Ʈ �� RecursiveFactorial ��� ����� ���� sum�� ���������� ���� �� �ʱ�ȭ //
int num;       // �Է� �޴� �� ���� num�� ���������� ���� //
int RecursiveFactorial(int num)
{
	if (num == 1) {   // num�� 1�� �� ����Լ��� ���� //
		printf("%d ", num); 
		return num; 
	}
	else {
		printf("%d x ", num);
		sum *= num;       // num�� factorial ����� ������ sum�� ���� //
		return RecursiveFactorial(num - 1); // ����Լ� �ȿ� num-1�� �μ��� �Ͽ� ����Լ��� ȣ�� //
		
	}
}
int main()
	{
		printf("�ڿ��� �Է� : ");
		scanf("%d", &num);
		printf("%d! = ", num);
		num = RecursiveFactorial(num); // ����Լ� ȣ�� // 
		printf("= %d\n", sum); // sum �� ���
		return 0;
	}



