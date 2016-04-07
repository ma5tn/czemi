#include <stdio.h>
#define NUMBER 5

int main(void){
  int i;
  double weight[NUMBER];
  double min, max;

  printf("5人の学生の体重を入力してください。\n");
  for ( i = 0; i < NUMBER; i++) {
    printf("student %d：", i + 1); scanf("%lf", &weight[i]);
  }

  min = weight[0];
  max = weight[0];
  for ( i = 1; i < NUMBER; i++) {
    if(weight[i] < min) min = weight[i];
    if(max < weight[i]) max = weight[i];
  }

  printf("5人の学生のうち最も重い人の体重は%.2fkgです。\n", max);
  printf("5人の学生のうち最も軽い人の体重は%.2fkgです。\n", min);

  return 0;
}
