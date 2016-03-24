#include <stdio.h>

int main(void){
  int a, b, c, min;

  printf("三つの整数を入力してください。\n");
  printf("整数1:"); scanf("%d", &a);
  printf("整数2:"); scanf("%d", &b);
  printf("整数3:"); scanf("%d", &c);

  min = (a <= b) ? (a <= c) ? a : c : (b <= c) ?  b : c;
  if(b < min) min = b;
  if(c < min) min = c;

  printf("最小値は%dです。\n", min);

  return 0;
}

