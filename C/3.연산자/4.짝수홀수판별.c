#include <stdio.h>

void main()
{
    int i;
    printf("정수를 입력하시오: ");
    scanf("%d", &i);
    printf("%d \n", (i % 2) ? 1 : 0); // 짝수면 0 홀수면 1
}