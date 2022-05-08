// 블랙잭
// 3장 카드의 합이 M을 넘지 않는 한도 내에서 최대 카드의 합
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int findMax(int C[], int N, int M) {
	int max = 0, value = 0;
	for (int i = 0; i < N; i++)
		for (int j = i + 1; j < N; j++)
			for (int k = j + 1; k < N; k++) {
				value = C[i] + C[j] + C[k];
				if (value > max && value <= M)
					max = value;
			}
	return max;
}

int main() {
	// 카드 개수: N, 최대 합: M
	int N, M;
	scanf("%d %d", &N, &M);

	int* cards = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++)
		scanf("%d", &cards[i]);
	printf("%d", findMax(cards, N, M));

	return 0;
}
