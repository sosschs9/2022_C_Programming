// 큰 정수의 덧셈
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void reverse(char arr[]) {
    int len = strlen(arr);
    for (int i = 0; i < len / 2; i++) {
        char tmp = arr[i];
        arr[i] = arr[len - i - 1];
        arr[len - i - 1] = tmp;
    }
}

void add(char a[], char b[], char c[]) {
    int i = 0;
    int carry = 0;

    while (i < strlen(a) || i < strlen(b)) {
        int sum = 0;
        if (i < strlen(a)) sum += a[i] - '0';
        if (i < strlen(b)) sum += b[i] - '0';
        sum += carry;

        if (sum / 10 != 0)
            carry = 1;
        else carry = 0;

        c[i] = sum % 10 + '0';
        i++;
    }

    if (carry == 1) {
        int len = strlen(a) > strlen(b) ? strlen(a) : strlen(b);
        c[len] += 1 + '0';
    }
}

int main() {
    char A[10002] = { 0 }, B[10002] = { 0 }, C[10003] = { 0 };
    scanf("%s", A); scanf("%s", B);
    reverse(A); reverse(B);

    add(A, B, C);
    reverse(C);
    printf("%s", C);

    return 0;
}
