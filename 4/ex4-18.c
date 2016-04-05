#include <stdio.h>

int main(void){
  int hight, hight_max, interval;

  printf("何cmから:"); scanf("%d", &hight);
  printf("何cmまで:"); scanf("%d", &hight_max);
  printf("何cmごと:"); scanf("%d", &interval);
  for (; hight <= hight_max; hight += interval) {
    printf("%dcm  %.2fkg\n", hight, (hight - 100) * 0.9);
  }

  return 0;
}
