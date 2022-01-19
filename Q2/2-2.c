//読み込んだ２つの値の比率を百分率で表示するプログラムを書きなさい。

#include <stdio.h>

int main(){
	double x, y;

	printf("整数値を２つ入力してください\n");

	scanf("%lf", &x);
	scanf("%lf", &y);

	printf("%.0lfの値は%.0lfの値の%.2lf%%です。\n", x, y, x / y * 100);

	return 0;
}
