#include <stdio.h>
int main(){
	int n,m;
	int min = 0;
	int arr[100000]={};
	scanf("%d %d", &n, &m);
	for(int i = 0; i<n ; i++){
		scanf("%d", &arr[i]);
	}
	for(int i = 0; i<n ; i++){
		for(int j = 0; j<i; j++){
			for(int k = 0; k<j; k++){
				if(arr[i]+arr[j]+arr[k] > min && arr[i]+arr[j]+arr[k] <= m){
					min = arr[i]+arr[j]+arr[k];
				}
			}
		}
	}
	
	printf("%d", min);
}
