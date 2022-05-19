#include<stdio.h>
typedef struct {
	int x, y;
}point;
void scanpoint(point getpoint[], int n);
void sortpoint(point getpoint[], int n);

int main() {
	int N; scanf("%d", &N);
	point getpoint[100000];
	scanpoint(getpoint, N);
	sortpoint(getpoint, N);
}
void scanpoint(point getpoint[], int n) {
	for (int i = 0; i < n; i++) {
		scanf("%d", &getpoint[i].x);
		scanf("%d", &getpoint[i].y);
	}
}
void sortpoint(point getpoint[], int n) {
	point t;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (getpoint[i].x > getpoint[j].x) {
				t = getpoint[i];
				getpoint[i] = getpoint[j];
				getpoint[j] = t;
			}
		}
		for (int j = i + 1; j < n; j++) {
			if ((getpoint[i].x == getpoint[j].x)&&(getpoint[i].y>getpoint[j].y)) {
				t = getpoint[i];
				getpoint[i] = getpoint[j];
				getpoint[j] = t;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d %d\n", getpoint[i].x, getpoint[i].y);
	}
}
