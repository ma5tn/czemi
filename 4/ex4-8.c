#include <stdio.h>

int main(void){
  int i;

  printf("整数を入力してください:"); scanf("%d", &i);
  for(; 0 <= i; i--){
    printf("%d ", i);
    if(i == 0) printf("\n");
  }
  return 0;
}
