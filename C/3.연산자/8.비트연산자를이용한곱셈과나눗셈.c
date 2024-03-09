#include <stdio.h>

void main()
{
    int result;
    printf("4 X 8/16 = ");
    result = 3;
    result = result << 3; // 8 = 2의 3제곱이므로 2진수로 3칸 좌로 시프트와 같음
    result = result >> 4; // 16 = 2의 4제곱이므로 2진수로 4칸 우로 시프트와 같음
    printf("%d \n", result);
}