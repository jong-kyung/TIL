#include <stdio.h>
#define KILO 1.609

void main()
{
    float miles, kms;
    printf("\t input(miles)==>"); // \t 수평으론 한 tab만큼 띔
    scanf("%f", &miles);
    kms = KILO * miles; // 1mile = 1.609km
    printf("\t %f mile=%f km \n", miles, kms);
}