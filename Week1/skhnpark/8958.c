#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void)
{
	int n, score, count;
	char ary[80];

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		score = 0;
		count = 0;

		scanf("%s", ary);
		for (int j = 0; j < strlen(ary); j++) {
			if (ary[j] == 'O') {
				count++;
				score += count;
			}
			else
				count = 0;
		}
		printf("%d\n", score);
	}
}
