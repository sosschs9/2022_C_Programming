#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
	int x;
	int y;
}dot;

int main(void) {
	dot list[100];
	int n;
	scanf("%d", &n);

	for (int i = 0; i< n; i++) {
		scanf("%d %d", &list[i].x, &list[i].y);

	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (list[i].x > list[j].x) {
				dot templist = list[i];
				list[i] = list[j];
				list[j] = templist;

			}

			if (list[i].x==list[j].x) {
				if (list[i].y > list[j].y) {
					dot templist = list[i];
					list[i] = list[j];
					list[j] = templist;
				}
			}
		}
	}

	for (int k = 0; k < n; k++) {
		printf("%d %d\n", list[k].x, list[k].y);
	}


	return 0;
}

//이렇게 했는데 왜 런타임 에러가 뜨는지 도무지 알 수 없어서 들고왔습니당..
