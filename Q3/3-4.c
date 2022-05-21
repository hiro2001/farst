#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, p, m;

	printf("基準点を入力しなさい。\n");
	scanf("%d", &i);

	printf("比較する値を入力しなさい\n");
	scanf("%d", &p);

	if(p - i < 0)
		m = -1;
	else if(p - i == 0)
		m = 0;
	else
		m = 1;

	switch(m){
		case -1:
			printf("基準点より%dだけ小さいです。\n", abs(p-i));
			break;
		case 0:
			printf("基準点と等しいです。\n");
			break;
		case 1:
			printf("基準点より%dだけ大きいです。\n", p-i);
			break;
		default:
			break;
	}
	return 0;
}
