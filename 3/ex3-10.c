#include <stdio.h>

int main(void){
  int a, b, diff;

  printf("二つの整数を入力してください。\n");
  printf("整数1:"); scanf("%d", &a);
  printf("整数2:"); scanf("%d", &b);

  diff = (a < b ) ?  b - a : a - b;

  printf("それらの差は%dです。\n", diff);

  return 0;
}

