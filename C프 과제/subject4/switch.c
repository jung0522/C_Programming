/*
#include <stdio.h>
// �����ð��� ��� switch ���� �Լ��� Ȱ���� �����ڿ� �� ������ �Է� �޾� ��갪�� ����ϴ� ���⸦ ����ÿ� //
char op;
int num1, num2;
void calculate(int num1, char op, int num2) // �� ������ �����ڸ� �Է¹޾� ����� �����ϴ� �Լ� ���� //
{
	switch(op) { // switch �� Ȱ�� //
	case  '+' :
		printf("%d %c %d = %d\n\n", num1, op, num2, num1 + num2); // �Է¹��� �����ڿ� �ش��ϴ� ���갪 ��� //
		break;                                                    //  �Ի� ���� �� break������ switch�� Ż�� //
	case  '-':
		printf("%d %c %d = %d\n\n", num1, op, num2, num1 - num2);
		break;
	case  '*':
		printf("%d %c %d = %d\n\n", num1, op, num2, num1 * num2);
		break;
	case  '/':
		printf("%d %c %d = %f\n\n", num1, op, num2, (double)num1 / num2); // /�� ��� ���갪�� �Ҽ��� ���� �� �����Ƿ� (double)�� ����� ����ȯ�� ����//
		break;
	case  '%':
		printf("%d %c %d = %d\n\n", num1, op, num2, num1 % num2);
		break;
	}
}
int main()
{
	while (1)
	{
		printf("������ �Է��Ͻÿ�(���Ḧ ���� �� x�� �Է��Ͻÿ�): ");
		scanf(" %c", &op);
		if (op == 'x')           // x�� �Է� �޾��� ��� �ݺ����� ������ ���� ���α׷��� �����Ų�� //
			break;
		printf("�� ���� �Է� : ");
		scanf("%d %d", &num1, &num2);
		calculate(num1, op, num2); // �Է� ���� �� ������ �����ڷ� ����ϴ� calculate�Լ� ȣ�� //
		
	}
	return 0;
}
*/

