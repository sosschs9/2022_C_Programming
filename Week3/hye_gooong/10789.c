// 세로 읽기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void reading(char w[][15]) {
	int length[5];
	for (int i = 0; i < 5; i++)
		length[i] = strlen(w[i]);

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 5; j++) {
			if (length[j] == 0) continue;
			printf("%c", w[j][i]);
			length[j]--;
		}
	}
}

int main() {
	char word[5][15];
	for (int i = 0; i < 5; i++)
		scanf("%s", word[i]);

	reading(word);
	return 0;
}
