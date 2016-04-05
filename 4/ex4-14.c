#include <stdio.h>

int main(void){
  int n, i, sum;

  printf("整数を入力してください。\n");
  
  sum = 0;
  n = 0;
  i = 1;
  do {
    sum += n;
    printf("No.%d:", i);
    scanf("%d", &n);
    i++;
  } while (n != 9999);
  printf("合計は%dで平均は%.2fです。\n", sum, sum/2.0);

  return 0;
}
