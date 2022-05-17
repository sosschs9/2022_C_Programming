#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[10001], b[10001];
	int c[10001], d[10001];
	int size;

	
	scanf("%s %s", &a, &b);

	if (strlen(a) >= strlen(b)) {
		size = strlen(a);
		for (int i = 0; i < size; i++) {
			c[i] = a[i] - '0';//아스키표
		}
		for (int i = 0; i < size - strlen(b); i++) {
			d[i] = 0;
		}
		for (int i = size - strlen(b); i < size; i++) {
			d[i] = b[i-size+strlen(b)] - '0';//아스키표
		}

	}
	else if (strlen(b) > strlen(a)) {
		size = strlen(b);
		for (int i = 0; i < size - strlen(a); i++) {
			c[i] = 0;
		}
		for (int i = size - strlen(a); i < size; i++) {
			c[i] = a[i-size+strlen(a)] - '0';//아스키표
		}
		for (int i = 0; i < size; i++) {
			d[i] = b[i] - '0';//아스키표
		}
	}
	int sum[10001];
	for (int i = 0; i < size; i++) {
		printf("%d %d\n", c[i], d[i]);
	}
	for (int i = 0; i < size; i++) {
		sum[i] = c[i] + d[i];
		
		if (sum[i] >= 10 && i >= 1) {
			sum[i - 1] += 1;
			sum[i] %= 10;
		}
	}
	for (int i = 0; i < size; i++) {
		printf("%d", sum[i]);
	}
}
