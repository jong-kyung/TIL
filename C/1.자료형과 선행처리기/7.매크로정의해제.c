#include <stdio.h>
#define SIZE 100

#if defined SIZE
#undef SIZE // 매크로 상수 SIZE 정의 해제
#define SIZE 200
#else
#define SIZE 300 // 매크로 상수 SIZE가 정의되지 않았으면 300으로 정의
#endif

void main()
{
    printf("SIZE: %d\n", SIZE);
}