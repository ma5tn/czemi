#include <stdio.h>

int main(void){
  int n, i, sum;

  do {
    printf("正の整数を入力してください:"); scanf("%d", &n);
    if(n < 0) printf("負の数を入力しないでください。\n");
  } while (n < 0);

  printf("1から%dまでを足した値は", n);
  sum = 0;
  do {
    sum += n;
    n--;
  } while (0 < n);

  printf(" %dです。\n", sum);

  return 0;
}
