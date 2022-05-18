#include<stdio.h>
void scanline(char getline[][16], int n);
void read(char getline[][16], int n);
#define TEST(x) (('A'<=x&&x<='Z')||('a'<=x&&x<='z')||('0'<=x&&x<='9'))

int main() {
	char getline[5][16];
	scanline(getline, 5);
	read(getline, 5);
}

void scanline(char getline[][16], int n) {
	for (int i = 0; i < n; i++) {
		scanf("%s", getline[i]);
	}
}
void read(char getline[][16], int n) {
	for (int j = 0; j < 15; j++) {
		for (int i = 0; i < n; i++) {
			if (TEST(getline[i][j])) {
				printf("%c", getline[i][j]);
			}
			else continue;
		}
	}
}
