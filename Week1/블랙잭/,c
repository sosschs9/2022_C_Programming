#include<stdio.h>
#include<string.h>
int main() {
	int N, M, i, j, k, get[110], result = 0;
	scanf("%d", &N);
	scanf("%d", &M);
	for (i = 0; i < N; i++) {
		scanf("%d", &get[i]);
	}
	for (i = 0; i < N - 2; i++) {
		for (j = i + 1; j < N - 1; j++) {
			for (k = j + 1; k < N; k++) {
				if (get[i] + get[j] + get[k] > result && get[i] + get[j] + get[k] <= M) {
					result = get[i] + get[j] + get[k];
				}
			}
		}
	}
	printf("%d\n", result);
}
