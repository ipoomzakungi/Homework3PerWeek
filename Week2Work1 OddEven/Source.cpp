#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    double a;
    scanf("%lf", &a);
    if (int(a) != a)
    {
        printf("Error");
        return 0;
    }

    if (((int)a) % 2 == 0) printf("even");
    else printf("odd");

}
