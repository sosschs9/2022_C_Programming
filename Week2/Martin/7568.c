#include <stdio.h>
void printresult(int w[], int h[], int repeat);
int main() {
	int repeat, w[50], h[50];
	scanf("%d", &repeat);
	for (int i = 0; i < repeat; i++) {
		scanf("%d", &w[i]);
		scanf("%d", &h[i]);
	}
	printresult(w, h, repeat);
}
void printresult(int w[], int h[], int repeat) {
	int rank[50];
	for (int i = 0; i < repeat; i++) {
		rank[i] = 1;
		for (int j = 0; j < repeat; j++) {
			if (w[i] < w[j] && h[i] < h[j]) {
				rank[i]++;
			}
		}
		printf("%d", rank[i]);
		printf(" ");
	}
}
