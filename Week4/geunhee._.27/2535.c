#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {

	int Nat;

	int Stud;

	int Grade;

}medal;

 
void findGrade(medal list[],int size) {

	for (int i = 0; i< size; i++) {

		for (int k = i + 1; k < size; k++) {

			if (list[i].Grade < list[k].Grade) {

				medal templist = list[i];

				list[i] = list[k];

				list[k] = templist;
      }
    }
	}

}

void printresult(medal list[]) {

	int count = 0;

	int i = 0;

	if (list[0].Nat == list[1].Nat && list[1].Nat == list[2].Nat) {
		if (list[0].Nat == list[1].Nat && list[1].Nat != list[3 + i].Nat) {
			for (int j = 0; j < 2; j++) {
				printf("%d %d\n", list[j].Nat, list[j].Stud);
			}
			printf("%d %d", list[3 + i].Nat, list[3 + i].Stud);
			i++;
		}

		else {
			for (int k = 0; k < 3; k++) {
				printf("%d %d\n", list[k].Nat, list[k].Stud);
			}

		}

	}
}


int main(void) {
  
	medal list[100];
	int n;
  
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &list[i].Nat, &list[i].Stud, &list[i].Grade);
	}

	findGrade(list, n);
	printresult(list);

}


//ctrl+F5해서 예제 입력하면 답이 잘 나오는데, 왜 백준에 제출만 하면 "틀렸습니다"라고 뜨는지 도무지 알 수가 없네요..
