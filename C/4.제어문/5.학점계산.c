#include <stdio.h> // 표준 입출력 헤더파일 선언

int main(void)
{
    int Jumsu; // 점수를 저장할 변수 선언

    printf("0점에서 100점수 사이의 점수 입력하세요.\n"); // 사용자에게 점수 입력 요청
    scanf("%d", &Jumsu);                                 // 사용자로부터 점수 입력받아 Jumsu 변수에 저장

    switch (Jumsu) // Jumsu의 조건에 따라 case문 실행
    {
    case 0 ... 59:                              // Jumsu의 범위가 0이상 60미만일때
        printf("%d점은 F학점입니다.\n", Jumsu); // F학점 출력
        break;
    case 60 ... 69:                             // Jumsu의 범위가 60이상 70미만일때
        printf("%d점은 D학점입니다.\n", Jumsu); // D학점 출력
        break;
    case 70 ... 79:                             // Jumsu의 범위가 70이상 80미만일때
        printf("%d점은 C학점입니다.\n", Jumsu); // C학점 출력
        break;
    case 80 ... 89:                             // Jumsu의 범위가 80이상 90미만일때
        printf("%d점은 B학점입니다.\n", Jumsu); // B학점 출력
        break;
    case 90 ... 100:                            // Jumsu의 범위가 90이상 100일때
        printf("%d점은 A학점입니다.\n", Jumsu); // A학점 출력
        break;
    default:
        return 0; // 기본값은 0을 반환
        break;
    }
}