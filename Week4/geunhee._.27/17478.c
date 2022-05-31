#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void chat1(int a,int n);
void chat2(int a,int n);
void printanswer();
int count = 0;

int main(void) {
	int n;
	int a = 1;
	int size = 0;

	scanf("%d", &n);
	printf("어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n");
   
	chat1(a,n);
	
	printanswer();
	
        chat2(a,n);
}

void chat1(int a,int i) {
	count++;
	for (int k = 1; k < count; k++) {
		printf("____");
	}
	printf("\"재귀함수가 뭔가요?\"\n");
	for (int k = 1; k < count; k++) {
		printf("____");
	}
	printf("\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n");
	for (int k = 1; k < count; k++) {
		printf("____");
	}
	printf("마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n");
	for (int k = 1; k < count; k++) {
		printf("____");
	}
	printf("그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n");

	if (a == i) {
		return;
	}
	chat1(a+1 ,i);
}

void printanswer() {
	for (int k = 1; k < count+1; k++) {
		printf("____");
	}
	printf("\"재귀함수가 뭔가요?\"\n");
	for (int k = 1; k < count + 1; k++) {
		printf("____");
	}
	printf("\"재귀함수는 자기 자신을 호출하는 함수라네\"\n");
}

void chat2(int a,int i) { 
	if (a == i + 1) {
		return;
	}
	for (int k = count+1;k>1; k--) {
		printf("____");
	}
	printf("라고 답변하였지.\n");
	count--;
	chat2(a + 1,i);
}
