#include<stdio.h>
#define line "____"
#define depart "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다."
#define question "\"재귀함수가 뭔가요?\""
#define story1 "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어."
#define story2 "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지."
#define story3 "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\""
#define answer "\"재귀함수는 자기 자신을 호출하는 함수라네\""
#define end "라고 답변하였지."
void conversation(int repeat, int n);

int main() {
	int repeat; scanf("%d", &repeat);
	puts(depart);
	conversation(repeat, 0);
}

void conversation(const int repeat, int n) {
	if (repeat == n) {
		for (int i = 0; i < n; i++) {
			printf(line);
		}
		puts(question);
        
		for (int i = 0; i < n; i++) {
			printf(line);
		}
		puts(answer);
        
		for (int i = 0; i < n; i++) {
			printf(line);
		}
		puts(end);
        
		return;
	}

	for (int i = 0; i < n; i++) {
		printf(line);
	}
	puts(question);

	for (int i = 0; i < n; i++) {
		printf(line);
	}
	puts(story1);

	for (int i = 0; i < n; i++) {
		printf(line);
	}
	puts(story2);

	for (int i = 0; i < n; i++) {
		printf(line);
	}
	puts(story3);

	conversation(repeat, n + 1);
    
	for (int i = 0; i < n; i++) {
		printf(line);
	}
	puts(end);
}
