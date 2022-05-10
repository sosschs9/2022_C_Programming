#include <stdio.h>
#include <string.h>
int main(){
	int n;
	char judge[100];
	int result[100];
	int count=0;
	int sum = 0;
	scanf("%d", &n);
	
	for(int i = 0; i<=n; i++){
		int j = 0;
		sum = 0;
		fgets(judge, sizeof(judge),stdin);
		while(1){
			if(judge[j] == '\0'){
				break;
			}
			if(judge[j] == 'O' && judge[j-1] == 'O'){
				count ++;
				sum += count;
			}
			else if(judge[j] == 'O'){
				count = 1;
				sum += count;
			}
			
			if( judge[j] == 'X'){
				count = 1;
			}
			j++;
		}
		result[i] = sum;
	}

	for(int i = 1; i<= n ; i++){
		printf("%d\n",result[i]);
	}	
}
