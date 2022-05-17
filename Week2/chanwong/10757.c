#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
	char a[10001], b[10001];
	int aa[10001], bb[10001];
	int result[10001] = {0};
	int size=0;
	scanf("%s %s",a,b);
	if(strlen(a) > strlen(b)){
		size = strlen(a);
	}
	else{
		size = strlen(b);
	}
/*	for(int i=0; i<size ;i++){
		aa[i] = (int)a[strlen(a)-i];
		bb[i] = (int)b[strlen(b)-i];
	}
*/	
	for(int i=strlen(a)-1; i>=0 ;i--){
		aa[i] = a[strlen(a)-1-i]-'0';
	}
	for(int i=strlen(b)-1; i>=0 ;i--){
		bb[i] = b[strlen(b)-1-i]-'0';
	}
/*	
	for(int i=size-1; i>=0 ;i--){
		printf("%d ",aa[i]);
	
	}
	printf("\n");
	for(int i=size-1; i>=0 ;i--){
		printf("%d ",bb[i]);
	
	}
	printf("\n");
*/	
//	for(int i= 0; i<size+2 ;i++){
//		result[i] += (aa[i]+bb[i])%10;
//		if(result[i]>=10){
//			result[i+1] += 1;
//		}
//	}
	
	int over = 0;
	for(int i= 0; i<=size+2 ;i++){
		result[i] = aa[i]+bb[i]+over;
		over = result[i]/10;
	//	printf("%d %d %d\n",aa[i],bb[i],over);
		result[i] %= 10;
	}
	
	
	 if(result[size] == 1){
		size ++;
	}
	else if(result[size] == 2){
		size +=2;
	}
//	printf(over?"%d":"",over);
	for(int i=size-1; i>=0 ;i--){
		printf("%d",result[i]);
	}
}
