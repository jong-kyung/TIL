#include <stdio.h>
void main()
{
    char arr[] = "frontend";
    char *ptr;
    int bigchar;
    ptr = arr; // 포인터변수에 배열의 주소를 저장
    printf("befroe: %s \n\n", arr);
    printf("after: ");

    while (*ptr)
    {
        bigchar = *ptr - 32; // ASCII 코드를 이용하여 대문자로 변환
        printf("%c", bigchar);
        ptr++;
    }
    printf("\n");
}