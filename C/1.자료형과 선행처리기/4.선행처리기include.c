#include <stdio.h>
#include "factorial.h" // 사용자 정의 헤더 파일인 factorial.h 포함

void main()
{
    int x;
    scanf("%d", &x);
    printf("%d != %d", x, factorial(x));
}