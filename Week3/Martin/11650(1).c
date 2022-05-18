#include<stdio.h>
typedef struct {
	int x, y;
}point;
void scanpoint(int N, point getpoint[]);
void sortpoint(int N, point getpoint[]);
void printsorted(int N, point getpoint[]);

int main() {
	int N;
	scanf("%d", &N);
	point getpoint[100];
	scanpoint(N, getpoint);
	sortpoint(N, getpoint);
	printsorted(N, getpoint);
}

void scanpoint(int N, point getpoint[]) {
	for (int i = 0; i < N; i++) {
		scanf("%d", &getpoint[i].x);
		scanf("%d", &getpoint[i].y);
	}
}
void sortpoint(int N, point getpoint[]) {
	point temp;
	for (int i = 0; i < N - 1; i++) {
		for (int j = i + 1; j < N; j++) {
			if (getpoint[i].x > getpoint[j].x) {
				temp = getpoint[i];
				getpoint[i] = getpoint[j];
				getpoint[j] = temp;
			}
		}
	}
	for (int i = 0; i < N - 1; i++) {
		for (int j = i + 1; j < N; j++) {
			if ((getpoint[i].x == getpoint[j].x) && (getpoint[i].y > getpoint[j].y)) {
				temp = getpoint[i];
				getpoint[i] = getpoint[j];
				getpoint[j] = temp;
			}
		}
	}
}
void printsorted(int N, point getpoint[]) {
	for (int i = 0; i < N; i++) {
		printf("%d %d\n", getpoint[i].x, getpoint[i].y);
	}
}
