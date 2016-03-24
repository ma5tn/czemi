#include <stdio.h>

int main(void){
  int a, b, c;
  int r1, r2;

  a = 111;
  b = 111;
  c = 112;

  printf("a = 111, b = 111, c = 112\n");
  printf("a == b の戻り値は%dです。\n", a == b);
  printf("a == c の戻り値は%dです。\n", a == c);
  printf("a <  b の戻り値は%dです。\n", a < b);
  printf("a <  c の戻り値は%dです。\n", a < c);

    return 0;
}
