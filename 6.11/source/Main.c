#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	srand(0);
	a = rand();
	int *num = (int *)malloc(sizeof(int)*a);
	int i, j, temp;
	for (i = 0; i < a; i++)
	{
		num[i] = rand();
	}
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < a - 1; j++)
		{
			if (num[j] < num[j + 1])
			{
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < a; i++)
	{
		printf("%d ", num[i]);
	}
	printf("\n");
	system("pause");
}