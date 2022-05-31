#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
	int nat;
	int stnum;
	int score;
}info;


int main(void)
{
	int n;
	scanf("%d", &n);

	info infor[1000];
	int count=3;
	info tept;

	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &infor[i].nat, &infor[i].stnum, &infor[i].score);
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (infor[i].score < infor[j].score) {
				tept = infor[j];
				infor[j] = infor[i];
				infor[i] = tept;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", infor[i].nat, infor[i].stnum, infor[i].score);
	}

	while (1) {
		if (infor[0].nat == infor[1].nat == infor[2].nat) {
			tept = infor[2];
			infor[2] = infor[count];
			infor[count] = tept;
			count++;
		}
		else break;
	}

	for (int i = 0; i < 3; i++) {
		printf("%d %d\n", infor[i].nat, infor[i].stnum);
	}

	return 0;
	
}
