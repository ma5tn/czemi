#include <stdio.h>

int main(void){
  int n;

  do {
    printf("非負の整数を入力してください:"); scanf("%d", &n);
    if(n < 0) printf("負の数を入力しないでください。\n");
  } while (n < 0);

  printf("%d を逆から読むと ", n);

  do {
    printf("%d", n % 10);
    n /= 10;
  } while (0 < n);

  printf(" です。\n");

  return 0;
}
