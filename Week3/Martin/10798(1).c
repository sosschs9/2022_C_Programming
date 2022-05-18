#include<stdio.h>
#include<string.h>
void scanline(char getline[][16]);
void decide(char getline[][16], int repeat[], int* longest, int* total);
void design(char getline[][16], char result[], int longest);
void printdesign(char result[], int total);
#define IS_CAPITAL(x) ('A'<=x&&x<='Z')
#define IS_SMALL(x) ('a'<=x&&x<='z')
#define IS_INT(x) ('0'<=x&&x<='9')

int main() {
	char getline[5][16], result[76];
	int repeat[5], longest, total = 0;
	scanline(getline);
	decide(getline, repeat, &longest, &total);
	design(getline, result, longest);
	printdesign(result, total);
}

void scanline(char getline[][16]) {
	for (int i = 0; i < 5; i++) {
		scanf("%s", getline[i]);
	}
}
void decide(char getline[][16], int repeat[], int* longest, int* total) {
	for (int i = 0; i < 5; i++) {
		repeat[i] = strlen(getline[i]);
		*total += repeat[i];
	}
	*longest = repeat[0];
	for (int i = 1; i < 5; i++) {
		if (*longest < repeat[i]) {
			*longest = repeat[i];
		}
	}
}
void design(char getline[][16], char result[], int longest) {
	int count = 0;
	for (int j = 0; j < longest; j++) {
		for (int i = 0; i < 5; i++) {
			if (IS_CAPITAL(getline[i][j]) || IS_SMALL(getline[i][j]) || IS_INT(getline[i][j])) {
				result[count] = getline[i][j];
				count++;
			}
			else {
				continue;
			}
		}
	}
}
void printdesign(char result[], int total) {
	for (int i = 0; i < total; i++) {
		printf("%c", result[i]);
	}
	printf("\n");
}
