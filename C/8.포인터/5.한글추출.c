#include <stdio.h>
void main()
{
    unsigned char *p = "Frontend Engineer 프론트엔드";
    unsigned char buff[20] = {
        0,
    };

    int i = 0;
    while (*p)
    {
        if (*p > 127) // 한글은 2바이트로 표현되므로 127보다 큰 값이다.
        {
            buff[i++] = *p;
        }
        p++;
    }
    puts(buff);
}