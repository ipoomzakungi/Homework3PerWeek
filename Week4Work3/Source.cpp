#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c,max,min,mid;
	scanf("%lf %lf %lf", &a, &b, &c);
	if (a > b && a > c)
	{
		if (b >= c)
		{
			max = a;
			min = c;
			mid = b;
		}
		else
		{
			max = a;
			min = b;
			mid = c;
		}
	}
	if (b > a && b > c)
	{
		if (a >= c)
		{
			max = b;
			min = c;
			mid = a;
		}
		else
		{
			max = b;
			min = a;
			mid = c;
		}
	}
	if (c > b && c > a)
	{
		if (a >= b)
		{
			max = c;
			min = b;
			mid = a;
		}
		else
		{
			max = c;
			min = a;
			mid = b;
		}
	}
	//printf("%.2lf %.2lf %.2lf", max, min, mid);
	if (pow(min, 2) + pow(mid, 2) == pow(max, 2))
	{
		printf("right triangle");
	}
	else printf("not a right triangle ");
}