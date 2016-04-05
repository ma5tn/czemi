#include <stdio.h>

int main(void){
  int i;
  int va[5] = {15, 20, 30, 0, 0};
  int vb[5];

  for ( i = 0; i < 5; i++) {
    vb[i] = va[4 - i];
  }

  printf("va vb\n");
  printf("-------\n");
  for ( i = 0; i < 5; i++) {
    printf("%2d %2d\n", va[i], vb[i]);
  }
  return 0;
}
