#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N, M, min=0;
	

		scanf("%d %d", &N, &M);
		int card[100]={0};

		for (int i = 0; i < N; i++) {
			scanf("%d", &card[i]);
		}
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < i; j++) {
				for (int k = 0; k < j; k++) {
					if (card[i] + card[j] + card[k] > min && card[i] + card[j] + card[k] <= M) {
						min = card[i] + card[j] + card[k];
					}
				}
			}
		}

		printf("%d", min);
}
