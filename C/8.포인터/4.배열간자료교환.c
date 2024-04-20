#include <stdio.h>

void swap(char *x, char *y)
{
    char temp;
    while (*x)
    {
        temp = *x;
        *x = *y;
        *y = temp;
        x++;
        y++;
    }
}

void main()
{
    static char a[] = "SEOUL";
    static char b[] = "kOREA";
    printf("교환하기 전 \n");
    printf("a[] = %s \n", a);
    printf("b[] = %s \n", b);

    swap(a, b);
    printf("교환한 후 \n");
    printf("a[] = %s \n", a);
    printf("b[] = %s \n", b);
}