#include<stdio.h>
int main()
{
	int zkem[100] = { 0, };
	int a, b;
	scanf_s("%d %d", &a, &b);

	for (int i = 0; i < a; i++)
	{
		scanf_s("%d", &zkem[i]);
	}

	int sum = 0;
	int rufrhk = 0;
	for (int i = 0; i < a - 2; i++)
	{
		for (int j = 0; j < a - 1; j++)
		{
			for (int k = j + 1; k < a; k++)
			{
				sum = zkem[i] + zkem[j] + zkem[k];
				if (sum <= b && rufrhk < sum)
				{
					rufrhk = sum;
				}
				sum = 0;
			}
		}
	}

	printf("%d\n", rufrhk);

	return 0;
}
