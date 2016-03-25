#include <stdio.h>

int main(void){
  int i;

  printf("整数を入力してください:"); scanf("%d", &i);
  for(; 1 <= i; i--){
    printf("%d ", i);
    if(i == 1) printf("\n");
  }

  return 0;
}
