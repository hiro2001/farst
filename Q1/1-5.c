//２つの整数値を読み込んでその値の差を表示させるプログラムを書きなさい。

#include <stdio.h>

int main(void){
	int i = 0, i1, i2;

	scanf("%d", &i1);
	scanf("%d", &i2);

	i = i1-i2;
	printf("差は%dです\n", i);
	return 0;
}
