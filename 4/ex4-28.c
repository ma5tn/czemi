#include <stdio.h>

int main(void){
  int w, h, n, i, j, k;
  printf("長方形を作りましょう。\n");
  printf("横幅:"); scanf("%d", &w);
  printf("高さ:"); scanf("%d", &h);
  printf("個数:"); scanf("%d", &n);

  for (i = 0; i < h; i++) {
    for ( j = 0; j < n; j++) {
      for ( k = 0; k < w; k++) {
        printf("*");
      }
      printf(" ");
    }
    printf("\n");
  }

  return 0;
}
