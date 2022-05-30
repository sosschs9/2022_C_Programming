#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
typedef struct coordinate{
	int x;
	int y;
}coordinate;

void sortCoordinate(int n, coordinate c[]);

int main() {
	coordinate c[100000];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &c[i].x , &c[i].y);
	}
	sortCoordinate(n, c);
	
}

void sortCoordinate(int n, coordinate c[]) {
	coordinate tmp;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (c[i].x > c[j].x ||(c[i].x == c[j].x && c[i].y > c[j].y)) {
				tmp = c[i];
				c[i] = c[j];
				c[j] = tmp;
			}	
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d %d\n", c[i].x, c[i].y);
	}
}
