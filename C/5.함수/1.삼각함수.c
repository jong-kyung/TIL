#include <stdio.h>
#include <math.h>

void main()
{
    double val = -1.0;
    do
    {
        printf("sin(%f) = %f\n", val, sin(val));
        printf("cos(%f) = %f\n", val, cos(val));
        printf("tan(%f) = %f\n", val, tan(val));
        val++;
    } while (val <= 1.0);
}