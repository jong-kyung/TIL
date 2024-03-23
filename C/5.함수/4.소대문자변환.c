#include <stdio.h>
#include <ctype.h>

void main()
{
    char ch;
    printf("문자를 입력하세요 : ");
    ch = getchar();
    if (isupper(ch))
    {
        printf("대문자입니다.\n");
        ch = tolower(ch);
        printf("소문자로 변환 : %c\n", ch);
    }
    else if (islower(ch))
    {
        printf("소문자입니다.\n");
        ch = toupper(ch);
        printf("대문자로 변환 : %c\n", ch);
    }
    else
        printf("알파벳이 아닙니다.\n");
}