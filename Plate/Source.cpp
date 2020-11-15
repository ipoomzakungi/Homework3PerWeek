#include <stdio.h>

int main()
{
	int a, b[2], c=1;
	b[0] = 0;
	scanf_s("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf_s("%d", &b[1]);
		if (b[1] - b[0] != c && b[1]!=b[0])
		{
			printf("MAI sequence NA");
			break;
		}
		else
		{
			c++;
		}
		b[0] = b[1];

	}
	
}