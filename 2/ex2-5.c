#include <stdio.h>

int main(void){
  int a, b;

  printf("二つの整数を入力してください。\n");
  printf("整数A:"); scanf("%d", &a);
  printf("整数B:"); scanf("%d", &b);

  printf("平均値の符号を反転した値は%dです。\n", -((a + b)/2));

  return 0;
}
