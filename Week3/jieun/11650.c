efine _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


typedef struct {
	int x, y;
}coordinate;

coordinate coordi[100001];


void SwapX(coordinate* coordi, int left, int right);
void SwapY(coordinate* coordinate,int n);

int main(void)
{
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &coordi[i].x, &coordi[i].y);
	}
	SwapX(coordi, 0, n);
	SwapY(coordi, n);
	
	for (int i = 1; i < n+1; i++) {
		printf("%d %d\n", coordi[i].x, coordi[i].y);
	}

	return 0;
}


void SwapX(coordinate* coordi, int left, int right) {
	int L = left, R = right;
	int pivot = coordi[(left + right) / 2].x;
	printf("%d\n", (left + right) / 2);
	coordinate temp;
	
	while (L <= R) {
		while (coordi[L].x < pivot) L++;
		while (coordi[R].x > pivot) R--;

		if (L <= R) {
			if (L != R) {
				temp = coordi[L];
				coordi[L] = coordi[R];
				coordi[R] = temp;
			}
			L++, R--;
		}
	}

	if (left < R) SwapX(coordi, left, R);
	if (L < right) SwapX(coordi, L, right);
}

void SwapY(coordinate* coordinate, int n) {
	int k;
		for (int j = 0; j < n -1; j++) {
			if (coordinate[j].x == coordinate[j + 1].x && coordinate[j].y < coordinate[j+1].y) {
				k = coordinate[j + 1].y;
				coordinate[j + 1].y = coordinate[j].y;
				coordinate[j].y = k;
			}
		}
