#include<stdio.h>
typedef struct {
	int nation, who, score;
}student;
void award(student* get);

int main() {
	student get[10000] = { 0 };
	award(get);
}

void award(student *get) {
	//몇 명을 입력받을지 입력받고 그 만큼 구조체에 저장
	int n; scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &get[i].nation, &get[i].who, &get[i].score);
	}
	//점수 높은 순서대로 정렬
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (get[i].score < get[j].score) {
				student t = get[i];
				get[i] = get[j];
				get[j] = t;
			}
		}
	}
	//1,2등은 조건없이 출력하고 반복문을 통해서 3등부터는 조건문을 통해서 조건에 맞을 때 출력
	for (int i = 0; i < n; i++) {
		if (i < 2) {
			printf("%d %d\n", get[i].nation, get[i].who);
		}
		else if ((i > 1) && ((get[0].nation != get[i].nation) || (get[1].nation != get[i].nation))) {
			printf("%d %d\n", get[i].nation, get[i].who);
			break;
		}
	}
}
