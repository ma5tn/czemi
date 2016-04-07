#include <stdio.h>
#define N 5

int main(void){
  int hight[N], i, sum;

  printf("5人の学生の身長を入力してください。\n");
  for ( i = 0; i < N; i++) {
    printf("student %d：", i + 1); scanf("%d", &hight[i]);
  }

  sum = 0;

  for ( i = 0; i < N; i++) {
    sum += hight[i];
  }

  printf("5人の学生の平均身長は%.2fです。\n", (double)sum/N);

  return 0;
}
