#include <stdio.h>

int main(void){
  int n, i, j;
  printf("何段ですか:"); scanf("%d", &n);

  for (i = 0; i < n; i++) {
    for ( j = 1; j < n - i; j++) {
      printf(" ");
    }
    for ( j = 0; j < 1 + 2 * i; j++) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
