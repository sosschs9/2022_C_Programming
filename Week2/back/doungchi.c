#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int N;
	int count = 0;
	int w[50] = { 0 }, t[50] = { 0 };

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &w[i], &t[i]);
	}

	for (int i = 0; i < N; i++)
	{
		count = 1;
		for (int j = 0; j < N; j++)
		{
			if (w[i] < w[j] && t[i] < t[j])
			{
				count++;
			}	
		}
		printf("%d ", count);
	}
	
}
