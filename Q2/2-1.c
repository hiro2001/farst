//整数値を読み込んでその値から5の和、差、積、商を表示させなさい。

#include <stdio.h>

int main(){

	int i;
	
	printf("整数値を入力してください：");
	scanf("%d", &i);
	printf("入力された値と５の\n和は%d\n差は%d\n積は%d\n商は%d\nです。\n", i+5, i-5, i*5, i/5);

	return 0;
}


