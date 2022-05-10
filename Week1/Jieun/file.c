#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    char arr[100];
    int result[100];
    int count = 0;
    int sum = 0;
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
        int j = 0;
        sum = 0;
        fgets(arr, sizeof(arr), stdin);
        while (1) {
            if (arr[j] == '\0') {
               break;
            }
            if (arr[j] == 'O' && arr[j - 1] == 'O') {
                count++;
                sum += count;
            }
            else if (arr[j] == 'O') {
                count = 1;
                sum += count;
            }

            if (arr[j] == 'X') {
                count = 1;
            }
            j++;
        }
        result[i] = sum;
    }

    for (int i = 1; i <= n; i++) {
        printf("%d\n", result[i]);
    }

}
