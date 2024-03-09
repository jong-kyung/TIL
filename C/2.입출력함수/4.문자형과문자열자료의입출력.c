#include <stdio.h>
#define REGION "서울특별시"
#define JOB "개발자"

void main()
{
    char ch;
    char name[20];

    printf("이름을 입력하시오.");
    gets(name); // 문자열 자료 입력 함수
    printf("학점을 입력하시오");
    ch = getchar(); // 문자형 자료를 키보드로 입력받음
    printf("\n\n");

    puts(REGION); // 문자열 자료 출력함수
    puts(JOB);
    puts(name);
    printf("학점은");
    putchar(ch); // 문자형 자료 출력
}