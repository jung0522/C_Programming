/*
#include <stdio.h>

long long recursive(int num) // recursive 함수 factorial 값 계산
{

	if (num == 1)
		{
		return num; // 재귀함수 끝내는 조건
	}
   
	return num * recursive(num-1); // 1씩 감소하며 호출해 값을 곱해준다

	
}

int main(void)
{

   for (int num = 1; num < 21; num ++)  // 1! ~ 20!까지 출력하기 1~20까지 반복
		{
		long long sum = 0;  // long long 총합 변수
		printf("%d! =" , num); 
		sum = recursive(num); // 1부터 인수로 하여 recursive 함수 호풀하고 계산 결과 반환 받음
		printf(" %lld\n" , sum); // 계산 결과 출력
		}
	return 0;
}
*/

