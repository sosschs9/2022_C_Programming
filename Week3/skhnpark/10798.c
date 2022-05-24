#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define LINE 5
#define MAX 15

int main(void)
{
	char ary[LINE][MAX];

	for (int i = 0; i < LINE; i++) {
		scanf("%s", ary[i]);
	}

	for (int i = 0; MAX; i++) {
		for (int j = 0; j < LINE; j++) {
			printf("%c", ary[j][i]);
		}
	}
}
