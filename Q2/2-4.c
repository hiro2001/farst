//2-3.cを改変して平均を求める値の個数を可変にしなさい。

#include <stdio.h>

int main(void){
  double i1, i2 = 0;
  int i, n;
  printf("値の個数を入力してください。\n入力された値の平均を求めます。\n");
  scanf("%d", &n);
  for(i = 0; i < n; i++){
    scanf("%lf", &i1);
    i2 += i1;
  }

  i2 /= n;
  printf("%dつの値の平均値は%.2lfです。\n", n, i2);
  return 0;
}
