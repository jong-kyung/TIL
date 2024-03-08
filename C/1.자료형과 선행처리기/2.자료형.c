#include <stdio.h>
// 매크로로 상수 정의
#define AGE 20        // 정수형
#define PI 3.141592   // 실수형
#define NAME "홍길동" // 문자열

// const로 상수 정의
const int a = 10;             // 정수형 상수
const float b = 10.56789;     // 실수형 상수
const char c = 'K';           // 문자형 상수
const char *JOB = "웹개발자"; // 문자열 상수

void main()
{
    // 변수 정의
    int i = 20;             // 정수형
    float j = 4.0;          // 실수형
    char k = 'A';           // 문자형
    char ch[10] = "홍길동"; // 배열변수 이용 문자열 정의
    char *p = "프론트엔드"; // 포인터 변수 이용 문자열 정의

    printf("직업은: %s 이름은: %s 나이는: %d\n\n", JOB, NAME, AGE);
    printf("%s %s 나이:%d 학점:%c 평점:%f\n", p, ch, i, k, j);
}