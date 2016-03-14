#include <stdio.h>

int main(void){
  int i;

  printf("整数を入力してください:");
  scanf("%d", &i);

  printf("その数から10を減じると%dです。\n", i - 10);
  
  return 0;
}
