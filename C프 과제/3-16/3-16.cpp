#include<stdio.h>

int main(void) {
	int num1 = 9,  num2 = 2; /* 정수형으로 변수 num1, num2에 수 할당*/
	printf("%d+%d=%d\n", num1, num2, num1+num2); /*num1과 num2를 더한 값을 서식 지정 문자에 대입*/
	printf("%d-%d=%d\n", num1, num2, num1-num2); /*num1과 num2를 뺀 값을 서식 지정 문자에 대입*/
 	printf("%dx%d=%d\n", num1, num2, num1*num2); /*num1과 num2를 나눈 값을 서식 지정 문자에 대입*/
	printf("%d/%d=%d\n", num1, num2, num1/num2); /*num1과 num2를 곱한 값을 서식 지정 문자에 대입*/
	printf("%d/%d의 나머지=%d\n", num1, num2, num1%num2); /*num1과 num2를 나눈 값의 나머지를 서식 지정 문자에 대입*/
	return 0;
}