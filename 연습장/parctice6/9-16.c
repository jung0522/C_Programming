/*
#include <stdio.h>

int AbsCompare(int n1, int n2);
int GetAbsValue(int n); 

int AbsCompare(int n1, int n2) {
	if (GetAbsValue(n1) > GetAbsValue(n2))
		return n1;
	else
		return n2;
}
int GetAbsValue(int n) {
	if (n < 0)
		return n * (-1);
	else
		return n;
}
int main(void) {
	   int num1, num2;
		   printf("두 개의 정수 입력: ");
		   scanf_s("%d %d", &num1, &num2);
		   printf("%d와 %d중 절댓값이 큰 정수: %d\n",
			   num1, num2, AbsCompare(num1, num2));
		   return 0;
   }
   */

