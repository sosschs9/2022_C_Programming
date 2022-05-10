#include<stdio.h>
#include<string.h>
int main() {
	int i, j, repeat, count = 0, score = 0;
	char get[110][110];
	scanf("%d", &repeat);
	for (i = 0; i < repeat; i++) {
		count = 0;
		score = 0;
		//gets(get[i]);
		scanf("%s", get[i]);
		for (j = 0; j < strlen(get[i]); j++) {
			if (get[i][j] == 'O') {
				count++;
				score += count;
			}
			else {
				count = 0;
			}
		}
		printf("%d\n", score);
	}
}
