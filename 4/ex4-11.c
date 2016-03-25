#include <stdio.h>

int main(void){
  int n, i;

  printf("正の整数を入力してください:"); scanf("%d", &n);
  for(i = 2; i <= n; i++){
    if(i % 2 == 0) printf("%d ", i);
    if(i == n) printf("\n");
  }

  return 0;
}
