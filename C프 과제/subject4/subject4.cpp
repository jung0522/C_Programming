/*
#include<stdio.h>

// 수업시간에 배운 반목문을 활용해 입력한 수의 줄까지 많아지는 별들을 이용해, 피라미드를 출력하는 프로그램을 만드시오. //
int main() {

	int size;
	
	printf("몇 줄의 피라미드를 출력할 것인가: ");
	scanf("%d", &size);

	for (int line = 1; line <= size; line++)  // line(줄)이 입력받은 size가 될 때 까지 실행 //
	{
		for (int blank = size - line; blank > 0; blank--) //blank(공백 1칸)의 수는 size - line이고 0이 될 때까지 -1 해준다 //
			printf(" ");
		for (int star = (line * 2) - 1; star > 0; star--) //star(삼각형)의 개수는 (line*2) - 1이고 0이 될 때까지 -1 해준다 //
			printf("*");
		printf("\n");  // 다음 줄로 넘어가기 위해 \n을 해준다 //
	}
	return 0;

}
*/