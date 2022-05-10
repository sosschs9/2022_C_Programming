#include <stdio.h>
#include <string.h>
int main(){
	int n;
	char judge[100];
	int result[100];
	int count=0;
	int sum = 0;
	scanf("%d", &n);
	
	for(int i = 0; i<=n; i++){				// 횟수에 따른 반복문.
		int j = 0;
		sum = 0;
		fgets(judge, sizeof(judge),stdin); 		// judge 입력.
		
		while(1){
			if(judge[j] == '\0'){				//마지막 배열일 경우에 break를 실행.
				break;
			}
			if(judge[j] == 'O' && judge[j-1] == 'O'){		// O가 연속적으로 등장할 경우에 점수를 count함.
				count ++;
				sum += count;
			}
			else if(judge[j] == 'O'){			// 연속적인 X가 아닐 경우에 count를 1로 초기화 후에 sum에 count값을 추가.
				count = 1;
				sum += count;
			}
			
			if( judge[j] == 'X'){			//X일 경우에 다시 count를 1로 초기화.
				count = 1;
			}
			j++;
		}
		result[i] = sum;			// 결과값 라인에 count를 추가.
	}

	for(int i = 1; i<= n ; i++){			// result 출력.
		printf("%d\n",result[i]);
	}	
}
