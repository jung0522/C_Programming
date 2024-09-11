/*
#include <stdio.h>
#include <math.h>

int res = 0;

int main()
{
    char a = 'A';   // %c는 한 문자//
    char c [] = "ABC"; // %s는 문자열//
    int b = 20;
    int d = 2;
    printf("%d\n", b);
    printf("%s\n", c); // 오류 //
    printf("%d\n", a); // %d로 문자하면 아스키코드 값 나옴//
   // printf("%s\n", a); java와 달리 안 됨 //
    printf("%d\n", 1+8); // 계산됨 //
    printf("\n");

    res = pow(2,16);    // 제곱 구하는 함수 //
    printf("%d\n", res);
    int 정수 = 9;        // 변수 $, 한글 됨 //
    printf("%d\n", 정수);
    printf("%d + %c = %d", 정수, a, (정수*a)); // %d로 문자하면 아스키코드 값 나옴//


}

#include <stdio.h>

int main(void)
{
    int a, b, val1, val2, val3, val4, val5;
    a = 17;
    b = 20;

    val1 = a & b;
    val2 = a | b;
    val3 = a ^ b;
    val4 = ~val1;
    val5 = ~val4;

    printf("a = 5, b = 3일 때\n");
    printf("1. a & b : %d\n", val1);
    printf("2. a | b : %d\n", val2);
    printf("3. a ^ b : %d\n", val3);
    printf("4. (3)번 값 ~val3 : %d\n", val4);
    printf("5. (4)번 값 ~val4 : %d\n", val5);
    return 0;

}
*/