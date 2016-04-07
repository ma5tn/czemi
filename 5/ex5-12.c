#include <stdio.h>
#define NUMBER 5

int main(void){
  int hight[NUMBER], i, sum;

  printf("5人の学生の身長を入力してください。\n");
  for ( i = 0; i < NUMBER; i++) {
    printf("student %d：", i + 1); scanf("%d", &hight[i]);
  }

  sum = 0;

  for ( i = 0; i < NUMBER; i++) {
    sum += hight[i];
  }

  printf("5人の学生の平均身長は%.2fcmです。\n", (double)sum/NUMBER);

  return 0;
}
