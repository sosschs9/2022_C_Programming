#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int n, m, test;
	int max = 0;
	int ary[100];

	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d", &ary[i]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			for (int k = j+1; k < n; k++) {
				test = ary[i] + ary[j] + ary[k];
				if (test > max && test <= m)
					max = test;
			}
		}
	}
	printf("%d", max);
}
