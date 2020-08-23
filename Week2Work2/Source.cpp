
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    float a, b;
    scanf("%f %f", &a, &b);
    //printf("%.6f %.6f\n",c,d);
    if (a < 0 || b < 0)
    {
        printf("Error");
        return 0;
    }
    printf("Area = %f x %f = %f", a, b, a * b);

}
