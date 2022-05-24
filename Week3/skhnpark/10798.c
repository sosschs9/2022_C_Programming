#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define LINE 5
#define MAX 15

int main(void)
{
	char ary[LINE][MAX] = { 0 };

	for (int i = 0; i < LINE; i++) {
		scanf("%s", ary[i]);
	}

	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < LINE; j++) {
			if (ary[j][i] == NULL) continue;
			printf("%c", ary[j][i]);
		}
	}
}
