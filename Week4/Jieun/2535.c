#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
	int nat;
	int stnum;
	int score;
}info;

void sWip(info a, int c, int d);

int main(void)
{
	int n;
	scanf("%d", &n);

	info infor[1000];
	int count=3;

	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &infor[i].nat, &infor[i].stnum, &infor[i].score);
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (infor[i].score < infor[j].score) {
				sWip(infor, j, i);
			}
		}
	}

	/*for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", infor[i].nat, infor[i].stnum, infor[i].score);
	}*/ //정렬잘되었는지 확인

	while (1) {
		if (infor[0].nat == infor[1].nat == infor[2].nat) {
			sWip(infor, 2, count);
			count++;
		}
		else break;
	}

	for (int i = 0; i < 3; i++) {
		printf("%d %d\n", infor[i].nat, infor[i].stnum);
	}

	return 0;
	
}
void sWip(info a[], int c, int d) {
	info tept;
	tept = a[c];
	a[c] = a[d];
	a[d] = tept;
}
