#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int a, b;
    scanf("%d", &a);
    if (a < 1)
    {
        printf("Error");
        return(0);
    }
    for (int R = 1;R <= a;R++)
    {
        for (int C = 1;C <= a - R;C++)
        {
            printf(" ");
        }
        printf("*");
        if (R > 1)
        {
            for (int k = 1;k < 2 * R - 2;k++)
            {
                printf(" ");
            }
            printf("*\n");
        }
        else printf("\n");
    }
    for (int R = a;R > 1;R--)
    {
        for (int C = a - R;C >= 0;C--)
        {
            printf(" ");
        }
        printf("*");
        if (R > 2)
        {
            for (int k = 1;k < 2 * R - 4;k++)
            {
                printf(" ");
            }
            printf("*\n");
        }
        else printf("\n");

    }
}
