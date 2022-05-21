#include<stdio.h>

int main(){
	int i, i2;

	printf("値を入力してください");
	scanf("%d", &i);

	if(i < 0)
		i2 = i * -1;

	printf("%dの絶対値は%dです。\n", i, i2);
	return 0;
}
