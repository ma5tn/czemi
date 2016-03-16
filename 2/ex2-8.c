#include <stdio.h>

int main(void){
  double n;

  printf("長さをcmで入力してください。:");
  scanf("%lf", &n);

  printf("それは%fインチです。\n", n/2.54);

  return 0;
}
