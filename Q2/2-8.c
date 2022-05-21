#include<stdio.h>
#include<math.h>

int main(){
	double i;

	printf("値を入力してください。\n");
	scanf("%lf", &i);

	//今回は正四面体の体積を公式を用いて計算させていますが、公式がわからなかった場合でも自分が計算する順番と同じように計算させることで求めることもできます。

	printf("%.lfの1辺を持つ正四面体の体積は%.3lfです。\n", i, sqrt(2) / 12 * i * i * i);
	return 0;
}
