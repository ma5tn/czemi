#include <stdio.h>

int main(void){
  int i;

  printf("整数を入力してください:");
  scanf("%d", &i);

  switch (i % 2) {
    case 0:
             printf("その数は偶数です。\n");
             break;
    case 1:
             printf("その数は奇数です。\n");
             break;
  }


  return 0;
}
