#include <stdio.h>

int main(void){
  int i;

  printf("整数を入力してください:"); scanf("%d", &i);
  if( i == 0 ) printf("ゼロを入力しましたね。\n") ;
  else printf("ゼロ以外の数を入力しましたね。\n");

  return 0;
}
