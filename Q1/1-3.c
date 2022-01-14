//直径を5として円の面積を求めよ。ただし、円周率は3.14とする。
#include<stdio.h>

int main(void){
	double pi = 3.14, h = 5, A;//整数値(int)は先程やったが、double小数点まで入出力することができる。いくつまでの値を入出力できるかはここでは入力しないが、存在する。
	
	A = h*h/4*pi;
	printf("直径5の円の面積は%lfです。\n", A);
	return 0;
}
