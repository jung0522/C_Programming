
#include <stdio.h>
// 수업시간에 배운 문자열을 이용해 n개의 길이의 숫자 문자열 numbers의 첫 번째부터 n(길이)번째까지 숫자를 더한 값을 출력하는 프로그램을 작성하시오 //
int main() {
    int n;            // 숫자 문자열의 길이를 나타낼 변수 n 선언 //
    char numbers[50];  // char형 배열을 이용해 숫자 문자열 변수 numbers 선언 //
    int sum = 0;       // 숫자 문자열의 모든 수를 더한 값을 대입할 변수 sum 선언 및 초기화//

    printf("몇 개의 수를 입력하시겠습니까: ");
    scanf("%d", &n);
    
    printf("숫자 문자열을 입력하시오: ");
    scanf(" %s", numbers); 

    for (int i = 0; i < n; i++) {
        int digit = numbers[i] - '0'; // 숫자를 char -> int로 바꿔주기 위해 - '0'을 해준다 //
        sum += digit;  // 숫자 문자열의 첫 번째부터 n(길이)번째까지 숫자를 더해 준다 //
    }
    printf("%d\n", sum); // 더한 값 출력 //
    return 0;
}

