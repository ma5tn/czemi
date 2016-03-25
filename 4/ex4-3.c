#include <stdio.h>

int main(void){
  int n, i;

  do {
    printf("非負の整数を入力してください:"); scanf("%d", &n);
    if(n < 0) printf("負の数を入力しないでください。\n");
  } while (n < 0);

  printf("%d は", n);
  i = 0;
  do {
    i = i + 1;
    n = n / 10;
  } while (0 < n);

  printf(" %d桁です。\n", i);

  return 0;
}
