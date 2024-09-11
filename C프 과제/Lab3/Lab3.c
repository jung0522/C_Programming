/*
#include <stdio.h>
#include<math.h>
int main()
{
    int num, i;
    int quo, rem;
    int bin[32];

    printf("정수 입력 : ");
    scanf("%d", &num);

    for (i = 0; num > 0; i++) {
        quo = num / 2;
        rem = num % 2;
        bin[i] = rem;
        num = quo;
    }

    int len = i;
    int last_i = i - 1;

    for (i = 0; i < len / 2; last_i--, i++)
    {
        int temp = bin[i];
        bin[i] = bin[last_i];
        bin[last_i] = temp;
    }
    for (i = 0; i < len; i++)
    {
        printf("%d", bin[i]);
    }
    num = 0;
    printf("\n");
    for (last_i = i - 1, i = 0; last_i >= 0; last_i--, i++)
        num += bin[last_i] * (int)pow(2, i);

    printf("%d\n", num);

}
*/




