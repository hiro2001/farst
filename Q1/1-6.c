//1-5で作成したプログラムを改変して、差を絶対値表記にしなさい。
#include <stdio.h>
#include <stdlib.h>//絶対値を表示させるときに使用するヘッダー

int main(void){
	int i = 0, i1, i2;

	scanf("%d", &i1);
	scanf("%d", &i2);

	i = i1-i2;
	printf("差は%dです\n", abs(i));///abs()を使用することで絶対値を表示させることができる。
	return 0;
}
