#include <stdio.h>

int main(void){
  int month;

  printf("何月ですか:"); scanf("%d", &month);

  if(3 <= month && month <= 5){
    printf("春です。\n");
  }else  if( 6 <= month && month <= 8){
    printf("夏です。\n");
  }else if(9 <= month && month <= 11){
    printf("秋です。\n");
  }else{
    printf("冬です。\n");
  }

  return 0;
}
