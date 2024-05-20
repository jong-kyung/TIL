#include <stdio.h>
#define WON 0
#define DOLLAR 1
#define N 2

union money
{
    int won;
    double dollar;
};

struct product
{
    char *name;
    int ptype;
    union money price;
}

main()
{
    struct product item[N];
    // 원화
    item[0].name = "커피";
    item[0].price.won = 4500;
    item[0].ptype = WON;

    // 달러
    item[1].name = "콜라";
    item[1].price.dollar = 1.5;
    item[1].ptype = DOLLAR;

    for (int i = 0; i < N; i++)
    {
        printf("품명: %-10s", item[i].name);
        if (item[i].ptype)

            printf("가격: $%.2f\n", item[i].price.dollar);
        else
            printf("가격: %d원\n", item[i].price.won);
    }
}