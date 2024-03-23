#include <stdio.h>
#include <string.h>

void main()
{
    char string[] = "abcdefghijklmmopqrstuvwxyz";
    unsigned i, len;
    puts(string);         // 문자열 출력
    len = strlen(string); // 문자열의 길이 반환
    for (i = 0; i < len; i++)
    {
        string[i] = string[i] & 0xDF; // 0xDF는 2진수로 1101 1111,0xDF와 비트단위 논리곱(AND) 연산을 통해 대문자로 변환
    }
    puts(string);
}