#include <stdio.h>

int main(void){
  int i;
  double vd[11];

  for (i = 0; i < 11; i++) {
    vd[i] = i * 0.1;
  }

  for ( i = 0; i < 11; i++) {
    printf("vd[%2d] = %.2f\n", i, vd[i]);
  }
  return 0;
}
