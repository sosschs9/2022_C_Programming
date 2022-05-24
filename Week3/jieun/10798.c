#include <stdio.h>
#define MAX 15


int main(void)
{
	char str[5][MAX]={0};
 
	for (int i = 0; i < 5; i++) {
		scanf("%s", str[i]);
	}
	for (int j = 0; j < MAX; j++) {
		for (int i = 0; i < 5; i++) {
			if (str[i][j] == NULL) {
				continue;
			}
			else printf("%c", str[i][j]);
		}
	}
	printf("\n");
	return 0;

}
