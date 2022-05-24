#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int N;
	int x[100], y[100], temp = 0;

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d %d", x[i], y[i]);
	}

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			if (x[j] > x[j + 1]) {
				temp = x[j];
				x[j] = x[j + 1];
				x[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			if (y[j] > y[j + 1]) {
				temp = y[j];
				y[j] = y[j + 1];
				y[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		printf("%d %d\n", x[i], x[i]);
	}
}
