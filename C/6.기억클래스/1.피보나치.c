#include <stdio.h>
unsigned fibonacci(void);

void main()
{
    int k;
    printf("k | fibonacci \n");
    for (k = 0; k <= 10; k++)
        printf("%2d | %6u\n", k, fibonacci());
}

unsigned fibonacci(void)
{
    static unsigned f = 0, pre_f = 1; // 정적변수로 함수를 반환해도 값이 저장되어 있다.

    unsigned re;
    re = f;
    f += pre_f;
    pre_f = re;
    return re;
}