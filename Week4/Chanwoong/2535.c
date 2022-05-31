#include <stdio.h>

typedef struct student{                 //구조체 선언
	int nation;
	int stdNum;
	int score;
}student; 

void nationCompare(int n, student std[]);             //함수 선언
void sort(int n, student std[]);

int main(){
	student std[10000]={0};
	int n;
	scanf("%d",&n);
	for(int i = 0; i < n ; i++){
		scanf("%d %d %d",&std[i].nation,&std[i].stdNum,&std[i].score);
	}
	sort(n, std);
	nationCompare(n, std);
	
}

void nationCompare(int n , student std[]){                  // 한 국가에서 메달이 2개 이상 나오지 않을 때 출력.
	int count[100]={0};
	int cnt = 0;
	for(int i = n-1 ; i >= 0 ; i--){
		count[std[i].nation]++;
		if(count[std[i].nation] > 2){
			continue;
		}
		if(cnt == 3){
			return;
		}	
		printf("%d %d\n",std[i].nation, std[i].stdNum);
		cnt++;
	}
}

void sort(int n , student std[]){                     // score을 기준으로 구조체를 정렬하는 함수.
	student tmp;
	for(int i = 0 ; i < n ; i++){
		for(int j = i+1 ; j < n; j++){
			if(std[i].score > std[j].score){
			tmp = std[i];
			std[i] = std[j];
			std[j] = tmp;
			}
		}
	}
	return;
}
