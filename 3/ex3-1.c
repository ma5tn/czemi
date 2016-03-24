#include <stdio.h>

int main(void){
  int i;

  printf("整数を入力してください:"); scanf("%d", &i);
  if(i % 10 != 0) printf("その数は10の倍数ではありません。\n");

  return 0;
}
