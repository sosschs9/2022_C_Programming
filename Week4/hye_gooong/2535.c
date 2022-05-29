// 아시아 정보올림피아드
// 나라별 매달 최대 개수 2개, 금은동메달 수상
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int N;

typedef struct {
	int nation;
	int num;
	int score;
} data;

void swap(data* s, int a, int b) {
	data tmp = s[a];
	s[a] = s[b];
	s[b] = tmp;
}

void sorting(data* students) {
	for (int i = 0; i < N-1; i++) 
		for (int j = i + 1; j < N; j++) 
			if (students[i].score < students[j].score)
				swap(students, i, j);
	
	if (students[0].nation == students[1].nation) 
		if (students[0].nation == students[2].nation) {
			int k = 3;
			while (1) {
				if (students[k].nation != students[0].nation) break;
				k++;
			}
			if (k < N) swap(students, 2, k);
		}
}

int main() {
	scanf("%d", &N);
	data* students = (data*)malloc(sizeof(data) * N);

	for (int i = 0; i < N; i++)
		scanf("%d %d %d", 
			&students[i].nation, &students[i].num, &students[i].score);

	sorting(students);
	for (int i = 0; i < 3; i++)
		printf("%d %d\n", students[i].nation, students[i].num);
}
