#include <stdio.h>

int main(void){
  int i, tmp;
  int va[7] = {1, 2, 3, 4, 5, 6, 7};
  int vb[7];

  printf("va : ");
  for ( i = 0; i < 7; i++) {
    printf("%d ", va[i]);
  }
  printf("\n");

  for ( i = 0; i < 7/2; i++) {
    tmp = va[i];
    va[i] = va[6 - i];
    va[6 - i] = tmp;
  }

  printf("va : ");
  for ( i = 0; i < 7; i++) {
    printf("%d ", va[i]);
  }
  printf("\n");

  return 0;
}
