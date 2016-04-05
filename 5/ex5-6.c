#include <stdio.h>

int main(void){
  int i, sum;
  int score[5];

  printf("点数を入力してください。\n");

  sum = 0;
  for ( i = 0; i < 5; i++) {
    printf("%d番：", i + 1); scanf("%d", &score[i]);
    sum += score[i];
  }

  printf("合計点：%d\n", sum);
  printf("平均点：%.1f\n", sum/5.0);

  return 0;
}
