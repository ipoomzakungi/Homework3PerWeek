#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	if (a % 4 == 0 && a % 400 == 0 && a % 100 == 0)
	{
		printf("366");
	}
	else printf("365");
}