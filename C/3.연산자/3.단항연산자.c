#include <stdio.h>

void main()
{
    int x = 1;

    printf("x=%d \n", x++); // x=1 출력 후 1증가
    printf("x=%d \n", x++); // x=2 출력 후 1증가
    printf("x=%d \n", ++x); // 1증가 후 x=4출력
    printf("x=%d \n", x--); // x=4 출력 후 1감소
    printf("x=%d \n", x--); // x=3 출력 후 1감소
    printf("x=%d \n", --x); // 1 감소 후 x=1
}