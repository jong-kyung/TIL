#include <stdio.h> // 표준 입출력 헤더파일 선언
void main(void)
{
    int num = 0;            // 입력받을 문자를 저장할 변수 선언
    int odd_total_num = 0;  // 홀수의 합을 저장할 변수 선언
    int even_total_num = 0; // 짝수의 합을 저장할 변수 선언

    printf("1~100 사이의 정수를 입력하세요.\n"); // 사용자에게 정수 입력 요청
    scanf("%d", &num);                           // 사용자로부터 정수 입력받아 num 변수에 저장

    if (num <= 100) // num이 100이하일때
    {
        while (num >= 1) // num이 1이상일때
        {
            if (num % 2 == 1) // num이 홀수일때
            {
                odd_total_num += num; // 홀수의 합에 num을 더함
            }
            else if (num % 2 == 0) // num이 짝수일때
            {
                even_total_num += num; // 짝수의 합에 num을 더함
            }
            num--; // num을 1씩 감소
        }
        printf("홀수 값의 총 합계 : %d\n", odd_total_num);  // 홀수의 합 출력
        printf("짝수 값의 총 합계 : %d\n", even_total_num); // 짝수의 합 출력
    }
    else // num이 100을 넘을때
    {
        printf("입력값이 100이 넘습니다.\n"); // 100이 넘었다는 메시지 출력
    }
}