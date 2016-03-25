#include <stdio.h>

int main(void){
  int a, b;

  printf("二つの整数を入力してください。\n");
  printf("整数1:"); scanf("%d", &a);
  printf("整数2:"); scanf("%d", &b);

  if( (0 < a - b && a - b < 10 ) || ( 0 < b - a && b - a < 10)){
    printf("それらの差は10以下です。\n");
  } else {
    printf("それらの差は10以上です。\n");
  }

  return 0;
}

