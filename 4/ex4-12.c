#include <stdio.h>

int main(void){
  int n, pow;

  printf("整数を入力してください:"); scanf("%d", &n);
  for(pow = 2; pow <= n; pow *= 2){
    printf("%d ", pow);
  }
  printf("\n");

  return 0;
}
