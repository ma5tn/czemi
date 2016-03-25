#include <stdio.h>

int main(void){
  int a, b, sum, tmp;

  printf("二つの整数を入力してください。\n");
  printf("整数1:"); scanf("%d", &a);
  printf("整数2:"); scanf("%d", &b);

  if(b < a){
    tmp = a;
    a = b;
    b = tmp;
  }

  printf("%d以上%d以下の全整数の和は", a, b);
  sum = 0;
  do {
    sum += a;
    a++;
  } while (a <= b);

  printf("%dです。\n", sum);

  return 0;
}
