#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, i,j;
	int kg[1000];
	int cm[1000];
	int grade = 1;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d %d\n", &kg[i], &cm[i]);
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (kg[i] < kg[j] && cm[i] < cm[j]) {
				grade++;
			}
		}

		printf("%d ", grade);

		grade = 1;
	}

	return 0;
}
