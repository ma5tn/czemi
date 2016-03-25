#include <stdio.h>

int main(void){
  int score;

  printf("点数を入力してください:"); scanf("%d", &score);
  if(score < 60){
    printf("評価は不可です。\n");
  }else if(60 <= score && score < 70){
    printf("評価は可です。\n");
  }else if(70 <= score && score < 80){
    printf("評価は良です。\n");
  }else if(80 <= score && score <=100){
    printf("評価は優です。\n");
  }

  return 0;
}
