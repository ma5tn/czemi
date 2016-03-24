#include <stdio.h>

int main(void){
  int a, b;

  printf("二つの整数を入力してください。\n");
  printf("整数1:"); scanf("%d", &a);
  printf("整数2:"); scanf("%d", &b);

  if(a < b){
    printf("大きい方の値は%dです。\n", b);
    printf("小さい方の値は%dです。\n", a);
  }else if(b < a){
    printf("大きい方の値は%dです。\n", a);
    printf("小さい方の値は%dです。\n", b);
  }else{
    printf("二つの値は等しいです。\n");
  }
    
  return 0;
}

