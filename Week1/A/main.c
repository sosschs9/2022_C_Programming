#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <string.h>

 

int main(void)

{

	int a, i,j;

	int cnt = 0;

	int sum = 0;

	char str[100];

 

	scanf("%d", &a);

 

	for (i = 0; i < a; i++) {

		scanf("%s", str);

 

		for (j = 0; j < strlen(str); j++) {

			if (str[j] == 'O') {

				cnt++;

				sum+=cnt;

				

			}

			if(str[j]=='X'){

				cnt = 0;

			}

 

		}

		printf("%d\n", sum);

		sum = 0;

		cnt = 0;

	

	}

	return 0;

}
