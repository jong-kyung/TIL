#include <stdio.h>

void main()
{
    int in;
    float fl;
    char ch;
    char str[50];

    printf("문자를 입력한 후 Enter키를 누르세요. \n");
    scanf("%c", &ch);   // 문자형 자료 입력
    printf("%c\n", ch); // 문자형 자료 출력

    printf("정숫값을 입력한 후 Enter키를 누르세요. \n");
    scanf("%d", &in);   // 정수형 자료 입력
    printf("%d\n", in); // 정수형 자료 출력

    printf("실숫값을 입력한 후 Enter키를 누르세요. \n");
    scanf("%f", &fl);   // 실수형 자료 입력
    printf("%f\n", fl); // 실수형 자료 출력

    printf("문자열을 입력한 후 Enter키를 누르세요. \n");
    scanf("%s", str);    // 문자열 자료 입력
    printf("%s\n", str); // 문자열 자료 출력
}