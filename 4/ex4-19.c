#include <stdio.h>

int main(void){
  int i, j;
  for ( i = 0; i < 10; i++) {
    for ( j = 1; j <= 5; j++) {
      printf("%2d ", i*5 + j);
    }
    printf("\n");
  }

  return 0;
}
