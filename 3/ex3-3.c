#include <stdio.h>

int main(void){
  int i;

  printf("整数を入力してください:");
  scanf("%d", &i);

  if(i % 2 == 0) printf("その数は偶数です。\n");
  else printf("その数は奇数です。\n");


  return 0;
}
