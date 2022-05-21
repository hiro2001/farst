#include<stdio.h>

int main(){
	double m, n;

	printf("身長と体重を入力してください。\n身長(cm)：体重(kg)　=　");

	scanf(" %lf %lf", &m, &n);

	printf("BIM値は%lfです。\n", n / m / m * 10000 );
	return 0;
}
