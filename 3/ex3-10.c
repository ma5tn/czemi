#include <stdio.h>

int main(void){
  int a, b;

  printf("二つの整数を入力してください。\n");
  printf("整数1:"); scanf("%d", &a);
  printf("整数2:"); scanf("%d", &b);

  if(a < b) printf("それらの差は%dです。\n", b - a);
  else printf("それらの差は%dです。\n", a - b);

  return 0;
}

