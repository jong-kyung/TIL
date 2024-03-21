#include <stdio.h>

int main()
{
    int op_num1, op_num2;
    char op;

    printf("계산기 프로그램\n");
    printf("연산자 입력(+, -, *, /): ");
    scanf("%c", &op);

    printf("%c의 피연산자1를 입력: ", op);
    scanf("%d", &op_num1);

    printf("%c의 피연산자2를 입력: ", op);
    scanf("%d", &op_num2);

    switch (op)
    {
    case '+':
        printf("%d + %d = %d\n", op_num1, op_num2, op_num1 + op_num2);
        break;
    case '-':
        printf("%d - %d = %d\n", op_num1, op_num2, op_num1 - op_num2);
        break;
    case '*':
        printf("%d * %d = %d\n", op_num1, op_num2, op_num1 * op_num2);
        break;
    case '/':
        printf("%d / %d = %d\n", op_num1, op_num2, op_num1 / op_num2);
        break;
    default:
        printf("잘못된 연산자입니다.\n");
        break;
    }
}