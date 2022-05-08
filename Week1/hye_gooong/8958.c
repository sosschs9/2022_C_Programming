// OX퀴즈
// 연속된 O의 개수를 점수로 계산
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 80

int score(char str[]) {
	int cnt = 0, res = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == 'O') {
			cnt++;
			res += cnt;
		}
		else if (str[i] == 'X') {
			cnt = 0;
		}
	}
	return res;
}

int main() {
	int n;
	scanf("%d", &n);
	char str[MAX];
	int* res = (int*)malloc(sizeof(int) * n);
	
	for (int i = 0; i < n; i++) {
		scanf("%s", str);
		res[i] = score(str);
	}
	for (int i = 0; i < n; i++) {
		printf("%d\n", res[i]);
	}
	
	return 0;
}
