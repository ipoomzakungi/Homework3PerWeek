#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    float a;
    scanf("%f", &a);
    if (a < 0)
    {
        printf("Error");
        return 0;
    }
    printf("%f", 22.0 / 7.0 * a * a);

}
