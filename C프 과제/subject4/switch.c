/*
#include <stdio.h>
// 수업시간에 배운 switch 문과 함수을 활용해 연산자와 두 정수를 입력 받아 계산값을 출력하는 계산기를 만드시오 //
char op;
int num1, num2;
void calculate(int num1, char op, int num2) // 두 정수와 연산자를 입력받아 계산을 진행하는 함수 생성 //
{
	switch(op) { // switch 문 활용 //
	case  '+' :
		printf("%d %c %d = %d\n\n", num1, op, num2, num1 + num2); // 입력받은 연산자에 해당하는 연산값 출력 //
		break;                                                    //  게산 진행 후 break문으로 switch문 탈출 //
	case  '-':
		printf("%d %c %d = %d\n\n", num1, op, num2, num1 - num2);
		break;
	case  '*':
		printf("%d %c %d = %d\n\n", num1, op, num2, num1 * num2);
		break;
	case  '/':
		printf("%d %c %d = %f\n\n", num1, op, num2, (double)num1 / num2); // /의 경우 연산값이 소수가 나올 수 있으므로 (double)로 명시적 형병환을 해줌//
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
		printf("연산자 입력하시오(종료를 원할 시 x를 입력하시오): ");
		scanf(" %c", &op);
		if (op == 'x')           // x를 입력 받았을 경우 반복문을 종료해 계산기 프로그램을 종료시킨다 //
			break;
		printf("두 정수 입력 : ");
		scanf("%d %d", &num1, &num2);
		calculate(num1, op, num2); // 입력 받은 두 정수와 연산자로 계산하는 calculate함수 호출 //
		
	}
	return 0;
}
*/

