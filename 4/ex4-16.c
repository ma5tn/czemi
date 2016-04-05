#include <stdio.h>

int main(void){
  int i, sum;

  sum = 0;
  for (i = 1; i <= 5; i++) {
    sum += i;
  }
  printf("1から5まで足した値は%dです。\n", sum);
}
