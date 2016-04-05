#include <stdio.h>

int main(void){
  int i, n;

  printf("整数を入力してください:"); scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    printf("%d", i % 10);
  }
  printf("\n");
}
