#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, a;
    printf("정수를 입력하세요 : ");
    scanf("%d", &a);
    srand(a); // 난수의 시드값 설정, rand 함수에 사용될 수를 초기화 -> rand의 값이 변할 수 있음
    for (i = 1; i <= 5; i++)
        printf("%d \n", rand());
}