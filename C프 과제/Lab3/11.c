/*
#include <stdio.h>
#include <Math.h>
int main()
{
	
	printf("int is %d bytes \n", sizeof(int)); // int�� 4bytes //
	printf("int is %d bits \n", sizeof(int) * 8); // int�� 32(4 x 8)bits//

	int num1 = -(pow(2, 31));  // ��ȣ�� ���� ��� -(2�� n(bits) - 1)�¿���
    int num2 = (pow(2, 31))-1;  // (2�� n(bits) - 1��) - 1���� ǥ�� �����ϹǷ� int�� -2�� 31 �¿��� 2�� 31�� - 1���� ǥ�� ���� // 
	printf("int�� ǥ���� �� �ִ� ������ %d ~ %d\n", num1, num2);
	printf("(����)int�� ǥ���� �� �ִ� ������ %d ~ %ld\n", num1, num2+1); // 2147483648�� �ƴ϶� ǥ�� ������ ��� -2147483648�� ���� //

	return 0;
}
*/
