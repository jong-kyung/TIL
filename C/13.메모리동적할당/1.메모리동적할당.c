#include <stdio.h>
#include <stdlib.h>

void main()
{
    char *str[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        if ((str[i] = (char *)malloc(128)) == NULL) // 128바이트만큼 메모리를 할당
        {
            printf("메모리를 할당할 수 없습니다.\n");
            exit(0);
        }
        printf("메모리를 할당했습니다.\n");
        gets(str[i]);
    }
    for (i = 0; i < 5; i++)
    {
        free(str[i]); // 메모리 해제
    }
}