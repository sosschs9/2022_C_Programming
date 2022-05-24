// 좌표 정렬하기
// x좌표가 증가하는 순, x좌표 같으면 y좌표 증가 순
// 퀵소트는 최악의 경우 n제곱임 그래서 백준 통과 안되는 경우도 있다고함
// 이번 문제는 퀵소트말고 머지소트 사용해야할듯
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
	int x;
	int y;
} coordinate;

int n;
coordinate* p;

void swap(coordinate *p, int a, int b) {
	coordinate tmp = p[a];
	p[a] = p[b];
	p[b] = tmp;
}

void quicksort(coordinate* p, int start, int end) {
	coordinate pivot = p[start];
	int left = start + 1;
	int right = end;

	while (left <= right) {
		while ((p[left].x < pivot.x) || (p[left].x == pivot.x && p[left].y < pivot.y)) left++;
		while ((p[right].x > pivot.x) || (p[right].x == pivot.x && p[right].y > pivot.y)) right--;
		if (left <= right) swap(p, left, right);
	}

	if (start < end) {
		swap(p, start, right);
		quicksort(p, start, right - 1);
		quicksort(p, right + 1, end);
	}
}

int main() {
	scanf("%d", &n);
	p = (coordinate*)malloc(sizeof(coordinate) * n);

	for (int i = 0; i < n; i++)
		scanf("%d %d", &p[i].x, &p[i].y);

	quicksort(p, 0, n - 1);
	for (int i = 0; i < n; i++)
		printf("%d %d\n", p[i].x, p[i].y);
	
	return 0;
}
