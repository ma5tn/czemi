#include <stdio.h>
#define N 8

int main(void){
  int i, tmp;
  int va[N];

  //vaの初期化
  for ( i = 0; i < N; i++) {
    va[i] = i + 1;
  }

  printf("va : ");
  for ( i = 0; i < N; i++) {
    printf("%d ", va[i]);
  }
  printf("\n");

  //入れ替える
  for ( i = 0; i < N/2; i++) {
    tmp = va[i];
    va[i] = va[N - 1 - i];
    va[N - 1 - i] = tmp;
  }

  printf("va : ");
  for ( i = 0; i < N; i++) {
    printf("%d ", va[i]);
  }
  printf("\n");

  return 0;
}
