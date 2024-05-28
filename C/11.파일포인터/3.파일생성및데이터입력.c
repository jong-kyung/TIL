#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fp;
    int ch;
    if ((fp = fopen("sample3.txt", "w+")) == NULL)
    {
        printf("파일을 열 수 없습니다.\n");
        exit(9);
    }

    for (ch = 65; ch <= 92; ch++)
    {
        fputc(ch, fp);
    }

    fseek(fp, 8L, SEEK_SET); // 파일의 처음부터 8바이트 떨어진 위치로 이동
    ch = getc(fp);           // 파일에서 문자를 읽어 ch에 저장
    printf("파일에서 읽은 문자(9번째 문자) : %c\n", ch);
    fseek(fp, 16L, SEEK_SET); // 파일의 처음부터 16바이트 떨어진 위치로 이동
    ch = getc(fp);            // 파일에서 문자를 읽어 ch에 저장
    printf("파일에서 읽은 문자(17번째 문자) : %c\n", ch);

    fclose(fp);
    return;
}