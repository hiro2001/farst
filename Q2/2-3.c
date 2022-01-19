//値を4つ入力させ、その平均値を出力するプログラムを書きなさい。

#include <studio.h>

int main(void){
  double i1, i2, i3, i4, i;
  printf("値を4つ入力してください。\n");

  scanf("%lf", &i1);
  scanf("%lf", &i2);
  scanf("%lf", &i3);
  scanf("%lf", &i4);

  i = i1 + i2 + i3 + i4;
  i /= 4;
  printf("4つの値の平均値は%lfです。\n", i);
  return 0;
}
  
