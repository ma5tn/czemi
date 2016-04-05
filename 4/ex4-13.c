#include <stdio.h>

int main(void){
  int n, i;

  printf("正の整数を入力してください:"); scanf("%d", &n);
  for(i = 0; i < n; i++){
    printf("*\n");
  }

  return 0;
}
