#include <stdio.h>
#include <string.h>

int main(void) {
	int N, M, i, j,k, str[100],sum;
	int max = 0;
	scanf("%d %d", &N, &M);

	for (i = 0;i < N;i++) {
		scanf("%d", str[i]);
	}

	for (i = 0;i < N - 2;i++) {
		for (j = i+1;j < N - 1;j++) {
			for (k = j+1;k < N;k++) {
				sum = str[i] + str[j] + str[k];
				if (max < sum && sum <= M) {
					max = sum;
				}
			}
		}
	}

	printf("%d\n", max);

	return 0;

}
