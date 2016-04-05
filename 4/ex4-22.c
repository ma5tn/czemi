#include <stdio.h>

int main(void){
  int side1, side2, w, h, i, j;
  printf("長方形を作りましょう。\n");
  printf("一辺（その1）："); scanf("%d", &side1);
  printf("一辺（その2）："); scanf("%d", &side2);

  if(side1 < side2){
    w = side2;
    h = side1;
  }else{
    w = side1;
    h = side2;
  }

  for ( i = 1; i <= h; i++) {
    for ( j = 1; j <= w; j++) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
