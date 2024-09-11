#include <stdio.h>
// 수업시간에 배운 재귀함수와 함수를 이용해 입력받은 자연수의 factorial 구하는 프로그램을 만드시오 //
int sum = 1;   // 업데이트 될 RecursiveFactorial 계산 결과값 변수 sum을 전역변수로 선언 및 초기화 //
int num;       // 입력 받는 값 변수 num을 전역변수로 선언 //
int RecursiveFactorial(int num)
{
	if (num == 1) {   // num이 1일 때 재귀함수가 종료 //
		printf("%d ", num); 
		return num; 
	}
	else {
		printf("%d x ", num);
		sum *= num;       // num의 factorial 계산을 실행해 sum에 저장 //
		return RecursiveFactorial(num - 1); // 재귀함수 안에 num-1를 인수로 하여 재귀함수를 호출 //
		
	}
}
int main()
	{
		printf("자연수 입력 : ");
		scanf("%d", &num);
		printf("%d! = ", num);
		num = RecursiveFactorial(num); // 재귀함수 호츌 // 
		printf("= %d\n", sum); // sum 값 출력
		return 0;
	}



