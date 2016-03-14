#include <stdio.h>

int main(void){
  int na, nb;

  printf("2つの整数を入力してください。\n");
  printf("整数1:"); scanf("%d", &na);
  printf("整数2:"); scanf("%d", &nb);
  printf("それらの積は%dです。\n", na * nb);

  return 0;
}
