#include<stdio.h>
struct answer
{
int country;
int student_number;
int score;
};

struct answer arr[101];
int main() {
int n;
int tmp = 0;
int top_3[3][2];
int medal[101] = { 0 };
scanf("%d", &n);
for (int i = 0; i < n; i++) {
scanf("%d", &arr[i].country);
scanf("%d", &arr[i].student_number);
scanf("%d", &arr[i].score);
}

  
  
for (int i = 0; i < n; i++) {
for (int j = i + 1; j < n; j++) {
if (arr[i].score < arr[j].score) {
tmp = arr[i].score;
arr[i].score = arr[j].score;
arr[j].score = tmp;
}
}
}

  
  int count = 0;
for (int i = 0; i < n; i++) {
if (medal[arr[i].country] < 2)
{
top_3[count][0] = arr[i].country;
top_3[count][1] = arr[i].student_number;
medal[arr[i].country]++;
count++;
}
else{
    top_3[count][0]=arr[i+1].country;
    top_3[count][1]=arr[i+1].student_number;
}
}
for (int i = 0; i < 3; i++) {
for (int j = 0; j < 2; j++) {
printf("%d ", top_3[i][j]);
}
printf("\n");
}
}
