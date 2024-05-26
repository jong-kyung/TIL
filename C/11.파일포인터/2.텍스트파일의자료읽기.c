#include <stdio.h>
void main()
{
    FILE *fp;
    char buff[100];

    fp = fopen("sample1", "r"); // sample1 파일을 읽기 모드로 열기

    if (fp != NULL)
    {
        while (!feof(fp)) // 파일의 끝을 검사
        {
            fgets(buff, 100, fp); // 파일에서 한 줄을 읽어 buff에 저장
            if (feof(fp))         // 파일의 끝이면 루프 탈출
                break;
            printf(buff);
        }
        fclose(fp);
    }
}