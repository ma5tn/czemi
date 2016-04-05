#include <stdio.h>

int main(void){
  int w, h, i, j;
  printf("長方形を作りましょう。\n");
  printf("横幅:"); scanf("%d", &w);
  printf("高さ:"); scanf("%d", &h);

  for ( i = 1; i <= h; i++) {
    for ( j = 1; j <= w; j++) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
