#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {

	int a;
	scanf("%d", &a);
	if (a <= 0) return 0;
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= a; j++)
		{
			if (j == i) printf("*");
			else printf(" ");
		}
		printf("\n");
	}

}
