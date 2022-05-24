#include<stdio.h>
int main()

{

	int N, input, j;

	scanf_s("%d", &N);

	int x[407], y[407];




	input = 0;

	while (input < N)

	{

		scanf_s("%d %d", &x[input], &y[input]);
		input++;

	}



	input = 0;

	while (input < N-1 )

	{

		j = input + 1;
		while (j < N)

		{

			if (x[input] >= x[j])

			{

				int temp;

				temp = x[input];

				x[input] = x[j];

				x[j] = temp;

				temp = y[input];

				y[input] = y[j];

				y[j] = temp;

			}

			j++;

		}

		input++;

	}





	input = 0;

	while (input < N)

	{

		printf("%d %d\n", x[input], y[input]);

		input++;

	}

	return 0;
}
