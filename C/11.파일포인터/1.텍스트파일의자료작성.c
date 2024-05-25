#include <stdio.h>

void main()
{
    FILE *fp;
    fp = fopen("sample1", "w"); // sample1 파일을 쓰기 모드로 열기

    if (fp != NULL)
    {
        fputs("대한민국 \n", fp); // fputs() 함수는 문자열을 파일에 출력하는 함수
        fputs("서울특별시 \n", fp);
        fputs("서초구 \n", fp);
        fputs("방배동 \n", fp);
    }
    fclose(fp);
}