//3-3.cを改変して平均を求める値の個数を可変にしなさい。

#include <studio.h>

int main(void){
  double i1, i2 = 0, i;
  int n;
  printf("値の個数を入力してください。\n");
  scanf("%d", &n)
  for(i = 0; i > n; i++){
    scanf("%lf", &i1);
    i2 += i1;
  }

  i2 /= i;
  printf("%dつの値の平均値は%lfです。\n", i, i2);
  return 0;
}
