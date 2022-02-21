//2-3.cを改変して平均を求める値の個数を配列を使用して可変にしなさい。

#include <stdio.h>

int main(void){
  double i1[256];
  int i, n;
  printf("値の個数を入力してください。\n");
  scanf("%d", &n);
	i1[n] = 0;
  for(i = 0; i < n; i++){
    scanf("%lf", &i1[i]);
    i1[n] += i1[i];
  }

  i1[n] /= n;
  printf("%dつの値の平均値は%.2lfです。\n", n, i1[n]);
  return 0;
}
