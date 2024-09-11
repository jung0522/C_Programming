/*
#include <stdio.h>

int main()
{
	int i = 3, j = 4;
	double k;

	printf("i / j is %d\n", i / j); // i(3) / j(4)는 0.75지만 i, j 모두 int형, %d를 서식문자로 하여 0이 출력된다 //

	k = i / j; // i(3) / j(4)는 0.75지만  i, j 모두 int형이므로 double형 k에 대입해도 0이 대입 된다 //
	printf("i / j is %f\n", k); // k(0)를 %f를 서식문자로 지정해 0.000000이 출력된다 //

	k = 1.0 * i / j; // 1.0 * i(3) / j(4)는 0.1(소수)를 곱해줘 자동 형 변환이 일어나 0.75의 값이 double형 k에 대입된다 //
	printf("1.0 * i / j is %f\n", k);  // k(0.75)를 %f를 서식문자로 지정해 0.750000가 출력된다 //

	k = (double)i / j;  // (double)i(3) / j(4)는 i를 double로 강제 형 변환을 해줘서 0.75의 값이 double형 k에 대입된다 //
	printf("(double)i / j is %f\n", k);  // k(0.75)를 %f를 서식문자로 지정해 0.750000가 출력된다 //
    
	return 0;
}
*/