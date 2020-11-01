#include <stdio.h>

int main()
{
	int a[9],sum=0,diff,check;
	for (int i = 0; i < 9; i++)
	{
		scanf_s("%d", &a[i]);
		sum += a[i];
	}
	//printf("%d\n", sum);
	diff = sum - 100;
	//printf("%d\n", diff);

	
	for (int i = 0; i < 9; i++)
	{
		for (int j = i+1; j < 9; j++)
		{
			//printf("%d + %d = %d\n", i, j, a[i] + a[j]);

			if (a[i] + a[j] == diff)
			{
				a[i] = -1;
				a[j] = -1;

			}
		}
	}
	for (int i = 0; i < 9; i++)
	{
		if (a[i] == -1)
			continue;
		else
			printf("%d\n", a[i]);
	}
}