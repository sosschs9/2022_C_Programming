#include<stdio.h>
#include<string.h>

int main()
{
	int num;
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)
	{
		char a[79] = "";
		int basic = 0;
		int plus = 1;
		scanf_s("%s", a, 79);

		for (int j = 0; j < strlen(a); j++)
		{
			if (a[j] == 'o')
			{
				basic += plus;
				plus++;
			}

			else
				plus = 1;
		}

		printf("%d\n", basic);

	}

	return 0;
}
