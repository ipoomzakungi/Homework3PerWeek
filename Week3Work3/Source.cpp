#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
    double a, b, c, diff;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a < c)
    {
        diff = b - a;
        printf("%.2lf\n", diff);
        diff = c - b;
        printf("%.2lf\n", diff);
        diff = c - a;
        printf("%.2lf\n", diff);

    }
    else
    {
        diff = a - b;
        printf("%.2lf\n", diff);
        diff = b - c;
        printf("%.2lf\n", diff);
        diff = a - c;
        printf("%.2lf\n", diff);
    }



}
