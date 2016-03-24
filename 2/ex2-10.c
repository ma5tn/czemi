#include <stdio.h>

int main(void){
    int a, b, c;

    printf("三つの整数を入力してください。\n");
    printf("整数A:"); scanf("%d", &a);
    printf("整数B:"); scanf("%d", &b);
    printf("整数C:"); scanf("%d", &c);
    printf("合計は%dで平均は%.1fです。\n", a+b+c, (a+b+c)/3.0);

    return 0;
}
