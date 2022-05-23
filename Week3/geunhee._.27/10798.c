#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char word[5][15] = { 0 };

	for (int i = 0; i < 5; i++) {
		scanf("%s", &word[i]);
	}

	for (int j = 0; j < 15; j++) {
		for (int i = 0; i < 5; i++) {
			if (strcmp(word[i][j], NULL) != 0) {
				printf("%c", word[i][j]);
			}
			
		}
	}

	return 0;
}
