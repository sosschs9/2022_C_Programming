#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	int high[50], weight[50];

	scanf("%d", &n);
	int count;
	
	
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &high[i], &weight[i]);
	}
	for (int i = 0; i < n; i++) {
		count = 1;
		for (int j = 0; j < n; j++) {
			if (high[i] < high[j] && weight[i] < weight[j]) {
				count++;
			}
		}
		printf("%d ", count);
	}

}
