#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (a < 1 || b < 1 || b>12) return 0;
	switch (b)
	{
	case 12:
			a += 30;

	case 11:
			a += 31;

	case 10:
		a += 30;
	case 9:
		a += 31;
	case 8:
		a += 31;
	case 7:
		a += 30;
	case 6:
		a += 31;
	case 5:
		a += 30;
	case 4:
		a += 31;
	case 3:
		a += 28;
	case 2:
		a += 31;
	default:
		break;
	}
	switch (a%7)
	{
	case 1:
		printf("Thursday");
		break;
	case 2:
		printf("Friday");
		break;
	case 3:
		printf("Saturday");
		break;
	case 4:
		printf("Sunday");
		break;
	case 5:
		printf("Monday");
		break;
	case 6:
		printf("Tuesday");
		break;
	case 7:
		printf("Wed");
		break;
	default:
		break;
	}
}