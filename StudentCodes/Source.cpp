#include <stdio.h>

int main()
{
	int amount;
	int code[30][3];
	int count = 0;

	scanf_s("%d", &amount);

	for (int i = 0; i < amount; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf_s(" %c", &code[i][j]);
		}
		if (i != 0)
		{
			for (int k = i-1; k >= 0; k--)
			{
				for (int j = 0; j < 3; j++)
				{
					if (code[i][j] == code[k][j])
					{
						count++;
						break;
					}
				}
			}
			
		}
	}

	printf("%d", count);
	



}