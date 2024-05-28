#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fp;
    int ch;
    int str;

    if ((fp = fopen("sample3.txt", "r")) == NULL)
    {
        printf("파일을 열 수 없습니다.\n");
        exit(0);
    }

    fseek(fp, 1L, SEEK_END); // 파일의 끝에서 1바이트 앞으로 이동
    for (ch = 0; ch <= 26; ch++)
    {
        str = getc(fp);           // 파일에서 문자를 읽어 ch에 저장
        fseek(fp, -2L, SEEK_CUR); // 현재 위치에서 2바이트 앞으로 이동
        putchar(str);             // 문자 출력
    }

    fclose(fp);
    return;
}