#include <stdio.h>

void main()
{
    int a = 10;
    int b = 20;
    int c, d;

    c = a + b; // 산술연산
    printf("c=%d\n", c);
    d = a > 5 && b < 10; // 논리연산
    printf("d=%d\n", d);

    if (a > b) // 관계연산
    {
        printf("a은 b보다 크다");
    }
    printf("a는 b보다 작다");
}