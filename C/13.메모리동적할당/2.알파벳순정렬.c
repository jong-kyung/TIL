#include <stdio.h>
#include <stdlib.h>

int main()
{
    char temp, *str;
    int i, j, k;
    str = (char *)malloc(128); // 128바이트만큼 메모리를 할당
    for (i = 0; (*str++ = getchar()) != '\n'; i++)
    {
        *str = '\0';  // 문자열의 끝을 표시
        str -= i + 1; // 문자열의 시작으로 이동
        for (j = 1; j < i; j++)
        {
            for (k = 1; k < i; k++)
            {
                if (*(str + k) < *(str + k - 1))
                {
                    temp = *(str + k);
                    *(str + k) = *(str + k - 1);
                    *(str + k - 1) = temp;
                }
            }
        }
    }
    printf("\n정렬된 문자열: %s\n", str);
}