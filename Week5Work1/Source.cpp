#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a,b=1;
	scanf("%d", &a);
	for (int j = 0; j < a;j++)
	{
		for (int i = 0; i < a; i++)
		{
			if (i == j || i == a - j - 1) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}