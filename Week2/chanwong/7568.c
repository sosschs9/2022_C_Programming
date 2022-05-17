#include <stdio.h>
int main(){
	int n ;
	int tall[101];
	int weight[101];
	int rank;
	scanf("%d", &n);
	for(int i = 0 ; i<n; i++){
		scanf("%d %d",&tall[i], &weight[i]);
	}
	for(int i = 0; i<n; i++){
                rank = 1;
		for(int j = 0; j <n ; j++){
			if(tall[j]>tall[i] && weight[j]>weight[i]){
				rank ++;
			}
		}
		printf("%d ",rank);
		
	}
	
}
