#include <stdio.h>

int main(void){
  int i;
  int vc[5];

  vc[0] = 0;
  vc[1] = 1;
  vc[2] = 2;
  vc[3] = 3;
  vc[4] = 4;
  vc[5] = 5;

  for ( i = 0; i < 5; i++) {
    printf("vc[%d] = %d\n", i, vc[i]);
  }
  return 0;
}
