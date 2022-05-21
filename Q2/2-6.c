#include<stdio.h>

int main(){
	int top, bot, hei;

	printf("台形の面積を求めます。\n上辺、下辺、高さを整数値で入力してください。\n");
	printf("上辺:");
	scanf("%d", &top);
	printf("下辺:");
	scanf("%d", &bot);
	printf("高さ:");
	scanf("%d", &hei);

	printf("台形の面積は%dです。\n", (top + bot) * hei / 2);

	return 0;
}
