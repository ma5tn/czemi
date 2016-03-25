#include <stdio.h>

int main(void){
  int i, cont_flag;

  do {
    printf("整数を入力してください:"); scanf("%d", &i);
    if(i % 10 != 0) printf("その数は10で割り切れません。\n");
    else printf("その数は10で割り切れます。\n");
    printf("もう一度？【Yes…0/No…9】:");
    scanf("%d", &cont_flag);
  } while (cont_flag == 0);

  return 0;
}
