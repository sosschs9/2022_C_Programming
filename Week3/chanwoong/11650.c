#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void sortCoordinate(int n, int x[], int y[]);

int main() {
	int n;
	int x[100000],y[100000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x[i], &y[i]);
	}
	sortCoordinate(n, x, y);
	
}

void sortCoordinate(int n, int x[], int y[]) {
	int tmp;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (x[i] > x[j]) {
				tmp = x[i];
				x[i] = x[j];
				x[j] = tmp;
				tmp = y[i];
				y[i] = y[j];
				y[j] = tmp;
			}else if (x[i] == x[j] && y[i] > y[j]) {
				tmp = y[i];
				y[i] = y[j];
				y[j] = tmp;
			}	
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d %d\n", x[i], y[i]);
	}
}
