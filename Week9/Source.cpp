#include <stdio.h>

int main() {

	int len=0, N=0,countC=0,mem;
	
	scanf_s("%d", &len);
	scanf_s("%d", &N);
	char c[100][20],res[20];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < len; j++)
		{
			scanf_s(" %c", &c[i][j]);
			if (i > 0)
			{
				if (c[i][j] != c[i - 1][j])
				{
					countC++;
				}
				if (countC > 2)
				{
					mem = i;
					countC = -1000;
				}
			}
		}
		
	}
	if (countC < 0)
	{
		for (int i = 0; i < len; i++)
		{
			printf("%c", c[mem][i]);
		}
	}
	else
	{
		printf("NONE OF THEM BREAK");
	}
	

}