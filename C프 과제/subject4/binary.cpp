
#include <stdio.h>
// 수업시간에 배운 10진수를 2진수 형태로 바꾸는 개념을 활용해 양의 정수를 입력받아 2진수의 형태로 나타내는 프로그램을 작성해보시오 //
int main()
{
    int num, i;   // num은 10진수 정수, i는 비트 배열의 인덱스 //
    int quo, rem;  // quo는 몫, rem은 나머지 //
    int bin[32];  // C 에서 int는 총 32bits므로 배열의 크기는 32로 설정 //
    printf("양의 정수 입력 : ");
    scanf("%d", &num);
    for (i = 0; num > 0; i++) {
        quo = num / 2;
        rem = num % 2; // 입력받은 10진수 정수를 2로 나눈 나머지가 비트가 된다. //
        bin[i] = rem;
        num = quo;
       
    }
    i = i - 1;  // 마지막에 i++ 때문에 비트가 하나 더 생겼으므로 -1을 해준다 //
    for (; i >= 0; i--) {
        printf("%d", bin[i]); // 비트가 역순으로 되어있기 때문에 역순으로 출력해준면 10진수를 2진수로 변환한 형태가 나온다. //
    }
    printf("\n");
    return 0;
}



