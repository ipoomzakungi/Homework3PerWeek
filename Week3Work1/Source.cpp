#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int j = 0;j < a;j++)
    {
        for (int i = 0;i < a - 1 - j;i++)
        {
            printf(" ");
        }
        for (int i = 0;i < j + 1;i++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int j = 1;j < a;j++)
    {
        for (int i = 0;i < j;i++)
        {
            printf(" ");
        }
        for (int i = 0;i < a - j;i++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
