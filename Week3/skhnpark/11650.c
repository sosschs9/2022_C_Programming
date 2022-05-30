#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

typedef struct
{
	int x;
	int y;
} coordinate;

int main(void)
{
	int N;
	coordinate crd[100000];

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &crd[i].x, &crd[i].y);
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - 1; j++) {
			if (crd[j + 1].x < crd[j].x) {
				coordinate temp = crd[j];
				crd[j] = crd[j + 1];
				crd[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - 1; j++) {
			if (crd[j + 1].y < crd[j].y) {
				coordinate temp = crd[j];
				crd[j] = crd[j + 1];
				crd[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		printf("%d %d\n", crd[i].x, crd[i].y);
	}

	return 0;
}
