#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*int main(void)
{
	int arr1[10000];
	int arr2[10000];
	int arr3[10000];
	int i;

	scanf("%s %s", arr1, arr2);

	if (strlen(arr1) > strlen(arr2)) {
		for (i = strlen(arr1)-1; i >=0; i--) {
			arr3[i] = arr1[i] + arr2[i];
			if (arr3[i] >= 9) {
				arr3[i] = arr3[i] % 10;
				arr3[i + 1] = arr3[i + 1] + 1;
			}
			arr3[i] = 0;

			if (arr3[i] < 10) {
				arr3[i] = arr1[i] + arr2[i];
			}
		}
	}

	if (strlen(arr1) < strlen(arr2)) {
		for (i = strlen(arr2) - 1; i >= 0; i--) {
			arr3[i] = arr1[i] + arr2[i];
			if (arr3[i] >= 9) {
				arr3[i] = arr3[i] % 10;
				arr3[i + 1] = arr3[i + 1] + 1;
			}
			arr3[i] = 0;

			if (arr3[i] < 10) {
				arr3[i] = arr1[i] + arr2[i];
			}
		}
	}

	printf("%s", arr3);

}*/
