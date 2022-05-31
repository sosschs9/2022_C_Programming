#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void whatRecursive(int k,int n);
void Print(int n);


int main(void)
{
	int n;//재귀 횟수
	scanf("%d", &n);
	
	printf("어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n");
	whatRecursive(n, n);
}

void whatRecursive(int k, int n) {
	if (n > 0) {
		
		for (int i = 1; i <= 4; i++) {
			uNderbar(k, n);
			Print(i);
		}
		whatRecursive(k, n-1);
	}
	else if (n == 0) {
		uNderbar(k, n);
		Print(1);
		uNderbar(k, n);
		printf("\"재귀함수는 자기 자신을 호출하는 함수라네\"\n");
		
		whatRecursive(k, n-1);
	}
	else if (n + k != -2) {
		for (int i = 0; i <= k + n; i++) printf("____");
		printf("라고 답변하였지.\n");
		
		whatRecursive(k, n - 1);
	}

}
void Print(int n) {
	if (n == 1) {
		printf("\"재귀함수가 뭔가요?\"\n");
	}
	else if (n == 2) {
		printf("\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n");
	}
	else if (n == 3) {
		printf("마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n");
	}
	else if (n == 4) {
		printf("그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n");
	}
}
uNderbar(int k, int n) {
	for (int i = 0; i < k - n; i++) printf("____");
}
