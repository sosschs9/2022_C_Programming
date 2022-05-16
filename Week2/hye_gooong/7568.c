// 덩치를 (x)kg (y)cm 로 표현
// 몸무게와 키가 둘 다 큰 경우일 때만 덩치 순위를 매길 수 있음
// 둘 중 하나만 큰 경우에는 등수를 정할 수 없다.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct body {
	int weight;
	int height;
} body;

void ranking(int n, body p[], int rank[]) {
	for (int i = 0; i < n; i++) {
		int r = 1;
		for (int j = 0; j < n; j++) {
			if (i == j) continue;
			if (p[i].height < p[j].height && p[i].weight < p[j].weight) {
				r++;
			}
		}
		rank[i] = r;
	}
}

int main() {
	int n;
	scanf("%d", &n);
	body* p = (body*)malloc(sizeof(body) * n);
	int* rank = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &p[i].weight, &p[i].height);
	}

	ranking(n, p, rank);
	for (int i = 0; i < n; i++)
		printf("%d ", rank[i]);

	return 0;
}
