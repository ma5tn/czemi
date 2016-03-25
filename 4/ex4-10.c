#include <stdio.h>

int main(void){
  int n, i;

  printf("正の整数を入力してください:"); scanf("%d", &n);
  for(i = 1; i <= n; i++){
    printf("%d ", i);
    if(i == n) printf("\n");
  }

  return 0;
}
