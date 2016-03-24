#include <stdio.h>

int main(void){
  int a, b, c, min;

  printf("三つの整数を入力してください。\n");
  printf("整数A:"); scanf("%d", &a);
  printf("整数B:"); scanf("%d", &b);
  printf("整数c:"); scanf("%d", &c);

  min = a;
  if(b < min) min = b;
  if(c < min) min = c;

  printf("最小値は%dです。\n", min);

  return 0;
}

