#include<stdio.h>

int main(void){
	int a = 0, max = 0;

	printf("最大値を求めます。整数値を五つ入力してください。\n");
	
	for(int i = 0; i < 5; i++){
		scanf(" %d", &a);
		if(max < a)
			max = a;
	}

	printf("最大値は%dです\n", max);
	return 0;
}
