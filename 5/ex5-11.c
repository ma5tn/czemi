#include <stdio.h>
#define 5 5

int main(void){
  int hight[5], i, sum;

  printf("5人の学生の身長を入力してください。\n");
  for ( i = 0; i < 5; i++) {
    printf("student %d：", i + 1); scanf("%d", &hight[i]);
  }

  sum = 0;

  for ( i = 0; i < 5; i++) {
    sum += hight[i];
  }

  printf("5人の学生の平均身長は%.2fです。\n", (double)sum/5);

  return 0;
}
