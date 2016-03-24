#include <stdio.h>

int main(void){
  int a, b;

  printf("二つの整数を入力してください。\n");
  printf("整数A:"); scanf("%d", &a);
  printf("整数B:"); scanf("%d", &b);

  if(a % b == 0) printf("BはAの約数です。\n");

  return 0;
}
