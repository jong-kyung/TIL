#include <stdio.h>
#include <string.h>

void main()
{
    char buffer[80], *p = buffer;
    int len, i = 0;
    printf("Input String: ");
    scanf("%s", p);
    len = strlen(p);
    while (*p)
        p++;

    printf("Inverse String \n");
    while (i < len)
    {
        p--;
        putchar(*p);
        i++;
    }

    putchar('\n');
}