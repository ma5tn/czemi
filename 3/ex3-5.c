#include <stdio.h>

int main(void){
  int i;

  printf("整数を入力してください:"); scanf("%d", &i);
  if( i < 0 ) i = - i;
  printf("絶対値は%dです。\n", i);

  return 0;
}
