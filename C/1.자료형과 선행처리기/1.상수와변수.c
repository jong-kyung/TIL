#include <stdio.h>
#define PI 3.141592
const int K = 10;
void main()
{
    double a;
    a = K + PI;
    // K=20; // 상수로 선언했기 때문에 에러 발생
    printf("%f\n", a);

    int x;
    int y;
    int z;

    x = 10;
    y = 20;
    z = x + y;
    printf("%d\n", z);
}