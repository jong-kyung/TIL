#include <stdio.h>

void main()
{
    int i = 127;
    int j;

    printf("%d, %x \n", i, i); // 10진수와 16진수로 출력
    printf("%x \n", &i);       // 주소 출력
    printf("%#x \n", &i);      // 16진수로 주소 출력
    printf("%x \n", &j);
    printf("%#x \n", &j);
}