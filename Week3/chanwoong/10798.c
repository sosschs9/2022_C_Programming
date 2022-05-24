#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void lengthReading(char w[][15]);

int main() {
	char word[5][15]={};
	for (int i = 0; i < 5; i++)
		scanf("%s", word[i]);

	lengthReading(word);

}

void lengthReading(char w[][15]) {

	for (int i = 0; i < 15; i++) {
		
		for (int j = 0; j < 5; j++) {
			if (w[j][i] != NULL){
				printf("%c", w[j][i]);
			}
			
			
			
		}
	}
}
