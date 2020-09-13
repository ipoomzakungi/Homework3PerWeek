#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float a, b, c;
	scanf("%f %f", &a, &b);
	
	if ((int)(b / a) != b / a && !(b / a < 0))
	{
		printf("%d", (int)(b / a)+1 );

	}
	if((int)(b/a) == b / a) printf("%.0f", b / a);
}