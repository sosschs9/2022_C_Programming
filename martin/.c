#include <stdio.h>
int main() {
	unsigned long long int get[2];
	for (int i = 0; i < 2; i++) {
		scanf("%llu", &get[i]);
	}
	printf("%llu\n", get[0] + get[1]);
    return 0;
}
