#include <stdio.h>

int main(void){
  int hight;

  printf("身長を入力してください:"); scanf("%d", &hight);
  printf("標準体重は%.1fです。\n", (hight - 100) * 0.9);

  return 0;
}
