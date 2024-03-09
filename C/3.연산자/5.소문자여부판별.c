#include <stdio.h>

void main()
{
    char ch;
    int j;
    printf("문자를 입력하시오. \n");
    scanf("%c", &ch);
    j = (ch >= 'a' && ch <= 'z'); // 소문자의 아스키 코드값 비교

    printf("결과는 %d \n", j);
}