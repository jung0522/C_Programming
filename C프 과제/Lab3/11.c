/*
#include <stdio.h>
#include <Math.h>
int main()
{
	
	printf("int is %d bytes \n", sizeof(int)); // int는 4bytes //
	printf("int is %d bits \n", sizeof(int) * 8); // int는 32(4 x 8)bits//

	int num1 = -(pow(2, 31));  // 부호가 없는 경우 -(2의 n(bits) - 1)승에서
    int num2 = (pow(2, 31))-1;  // (2의 n(bits) - 1승) - 1까지 표현 가능하므로 int는 -2의 31 승에서 2의 31승 - 1까지 표현 가능 // 
	printf("int로 표현할 수 있는 범위는 %d ~ %d\n", num1, num2);
	printf("(오류)int로 표현할 수 있는 범위는 %d ~ %ld\n", num1, num2+1); // 2147483648이 아니라 표현 범위를 벗어나 -2147483648이 나옴 //

	return 0;
}
*/
