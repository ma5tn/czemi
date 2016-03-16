#include <stdio.h>

int main(void){
  double n;

  printf("実数を入力してください。:"); scanf("%lf", &n);
  printf("0.1を加えると%fです。\n", n + 0.1);
  printf("0.1を減じると%fです。\n", n - 0.1);
  printf("0.1を乗じると%fです。\n", n * 0.1);
  printf("0.1で除すと%fです。\n", n / 0.1);

  return 0;
}
