#include <stdio.h>

void main()
{
    int a, b;

    printf("input(integer)==>"); // printf(): 표준출력함수
    scanf("%d", &a);             // scanf(): 표준 입력함수
    printf("input(integer)==>");
    scanf("%d", &b);
    printf("\n a=%d, b=%d", a, b);
}