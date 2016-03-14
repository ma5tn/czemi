#include <stdio.h>

int main(void){
  int na, nb, nc;

  printf("三つの整数値を入力してください。\n");
  printf("整数1:"); scanf("%d", &na);
  printf("整数2:"); scanf("%d", &nb);
  printf("整数3:"); scanf("%d", &nc);
  printf("それらの和%dです。\n", na + nb + nc);

  return 0;
}
