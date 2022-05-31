// 실패!!

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

typedef struct
{
	int country;
	int student_id;
	int score;

} information;


int main(void)
{
	int N;
	int cnt = 0, k = 0;
	information info[100];

	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d %d %d", &info[i].country, &info[i].student_id, &info[i].score);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - 1; j++) {
			if (info[j].score < info[j + 1].score) {
				information temp = info[j];
				info[j] = info[j + 1];
				info[j + 1] = temp;
			}
		}
	}

	return 0;
}
